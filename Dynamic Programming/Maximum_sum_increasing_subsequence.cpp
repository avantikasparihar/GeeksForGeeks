#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Maximum sum increasing subsequence
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        int dp[n][n];
        for(int i=0; i<n; i++) {
            cin >> a[i];
            dp[i][0] = a[i];
        }
        for(int i=1; i<n; i++) {
            for(int j=1; j<=i; j++) {
                if(a[j-1] < a[i]) 
                    dp[i][j] = max(dp[i][j-1], a[i]+dp[j-1][j-1]);
                else
                    dp[i][j] = dp[i][j-1];
            }
        }
        int res=0;
        for(int i=0; i<n; i++) {
            res = max(res, dp[i][i]);
        }
        cout << res << endl;
    }
    
	return 0;
}