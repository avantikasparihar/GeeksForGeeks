#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Maximum product of two numbers
    
    int t;
    cin >> t;
    long long n, mxx, mx;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        cin >> a[0] >> a[1];

        if (a[0] > a[1]) {
            mxx = a[0];
            mx = a[1];
        }
        else {
            mxx = a[1];
            mx = a[0];
        }
        
        for(int i=2; i<n; i++) {    // to find the largest two numbers
            cin >> a[i];
            if (a[i] > mxx) {
                mx = mxx;
                mxx = a[i];
            }
            else if (a[i] > mx)
                mx = a[i];
        }
        cout << mxx*mx << endl;
    }
    
	return 0;
}