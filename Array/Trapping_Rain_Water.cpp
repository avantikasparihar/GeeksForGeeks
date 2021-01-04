#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Trapping Rain Water
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), mxh(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        int res = 0, l = a[0];
        mxh[n-1] = a[n-1];
        for(int i=n-2; i>=0; i--) {
            mxh[i] = max(a[i], mxh[i+1]);
        }
        for(int i=1; i<n-1; i++) {
            int x = min(l, mxh[i+1]) - a[i];
            res += max(x, 0);
            l = max(l, a[i]);
        }
        cout << res << endl;
    }
    
	return 0;
}