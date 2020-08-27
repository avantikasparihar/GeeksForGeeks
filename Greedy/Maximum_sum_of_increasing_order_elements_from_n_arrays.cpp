#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Maximum sum of increasing order elements from n arrays
    
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int ar[n][m];
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> ar[i][j];
            }
        }
        int curr=INT_MAX, flg=0, ans=0;
        for(int i=n-1; i>=0; i--) {
            int mx=INT_MIN;
            for(int j=0; j<m; j++) {
                if(ar[i][j]>mx && ar[i][j]<curr)
                    mx = ar[i][j];
            }
            if(mx > INT_MIN) {
                curr = mx;
                ans += curr;
            }
            else {
                flg=1;
                break;
            }
        }
        if(flg)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
    
	return 0;
}