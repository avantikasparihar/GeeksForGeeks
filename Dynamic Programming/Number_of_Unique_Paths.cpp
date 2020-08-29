#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Number of Unique Paths
    
    int t, m, n;
    cin >> t;
    while (t--) {
        cin >> m >> n;
        int dp[m][n];
        dp[0][0]=1;
        for(int i=1; i<m; i++)
            dp[i][0] = 1;
        for(int j=1; j<n; j++)
            dp[0][j] = 1;
        for(int i=1; i<m; i++)
            for(int j=1; j<n; j++)
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
        cout << dp[m-1][n-1] << endl;
    }
    
	return 0;
}