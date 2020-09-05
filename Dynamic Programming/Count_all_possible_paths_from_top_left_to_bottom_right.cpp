#include<bits/stdc++.h>

using namespace std;

long long mod = (pow(10,9)+7);

int main()
 {
	// only gravity will pull me down

    // Count all possible paths from top left to bottom right
    
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        size_t dp[m][n];
        for(int i=0; i<m; i++) 
            dp[i][0] = 1;
        for(int i=0; i<n; i++) 
            dp[0][i] = 1;
        for(int i=1; i<m; i++) {
            for(int j=1; j<n; j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
                dp[i][j] = dp[i][j] % mod;
            }
        }
        cout << dp[m-1][n-1] % mod << endl;
    }
    
	return 0;
}