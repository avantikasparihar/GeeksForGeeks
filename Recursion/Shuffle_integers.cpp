#include <bits/stdc++.h>

using namespace std;

void recursion(vector<long long> &a, int lo, int hi) {    // works only for 2^i
    if (lo > hi)
        return;
    
    if (hi - lo == 1) 
        return; 
        
    int mid1 = (lo + hi) / 2; 
    int idx = mid1 + 1; 
    int mid2 = (lo + mid1) / 2; 

    for (int i = mid2 + 1; i <= mid1; i++) 
        swap(a[i], a[idx++]); 
  
    recursion(a, lo, mid1); 
    recursion(a, mid1 + 1, hi); 
}    // OVERKILL -_-

int main() {
	// only gravity will pull me down

	// Shuffle integers
	
	long long t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<long long> a(n);
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    recursion(a, 0, n-1);
	    for (int i = 0; i < n; i++) {
	        cout << a[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}