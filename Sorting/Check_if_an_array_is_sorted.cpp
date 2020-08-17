#include <bits/stdc++.h>
using namespace std;

int main() {
	// only gravity will pull me down

	// Check if an array is sorted
	
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> c(n);
	    cin >> c[0];
	    int flg = 0;
	    for(int i=1; i<n; i++) {
	        cin >> c[i];
	        if (c[i] < c[i-1]) {
	            flg = 1;
	            break;
	        }
	    }
	    if (flg)
	        cout << 0 << endl;
	    else
	        cout << 1 << endl;
	}
	return 0;
}