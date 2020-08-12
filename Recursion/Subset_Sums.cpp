#include <bits/stdc++.h>

using namespace std;

void recursion(vector<int> A, vector<int> &res, int lo, int hi, int sum) {
    if (lo > hi) {
        res.push_back(sum);
        return;
    }
    recursion(A, res, lo+1, hi, sum + A[lo]);    //for the subset including A[lo]
    recursion(A, res, lo+1, hi, sum);    //for the subset excluding A[lo]
}

int main() {
	//only gravity will pull me down

	//Subset Sums
	
	int t, N, x;
	cin >> t;
	while(t--) {
	    cin >> N;
	    vector<int> A;
	    for (int i = 0; i < N; i++) {
	        cin >> x;
	        A.push_back(x);
	    }
	    vector<int> res;
	    recursion(A, res, 0, N-1, 0);
	    sort(res.begin(), res.end());
	    for (int i = 0; i < res.size(); i++)
	        cout << res[i] << " ";
	    cout << endl;
	}
	return 0;
}