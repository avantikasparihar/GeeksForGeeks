#include <bits/stdc++.h>
using namespace std;

long long T(int n) {    //simplest recursion question ever :)
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return T(n-2) * T(n-2) - T(n-1);    //Recurrence relation already given in the ques.
}

int main() {
	// only gravity will pull me down

	// G.F Series
	
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    for (int i = 1; i <= n; i++) 
	        cout << T(i) << " ";
	    cout << endl;
	}
	
	return 0;
}