#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Gold Mine Problem
    
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int M[n][m];
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin >> M[i][j];
        int dp[n+2][m+1];
        for(int i=0; i<n+2; i++)
            dp[i][0]=0;
        for(int j=0; j<m+1; j++) {
            dp[0][j]=0;
            dp[n+1][j]=0;
        }
        int res=0;
        for(int j=1; j<=m; j++) {
            for(int i=1; i<=n; i++) {
                dp[i][j]=M[i-1][j-1] + max(dp[i][j-1], max(dp[i-1][j-1], dp[i+1][j-1]));
                res = max(res, dp[i][j]);
            }
        }
        cout << res << endl;
    }
    
	return 0;
}