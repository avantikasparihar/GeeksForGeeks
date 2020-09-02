#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // 0 - 1 Knapsack Problem
    
    int t, n, w;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> w;
        vector<int> wt(n), v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        for(int i=0; i<n; i++)
            cin >> wt[i];
        int dp[n+1][w+1];
        for(int i=0; i<=n; i++) {
            for(int j=0; j<=w; j++) {
                if(i==0 || j==0)
                    dp[i][j] = 0;
                else if(wt[i-1] <= j)
                    dp[i][j] = max(v[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        cout << dp[n][w] << endl;
    }
    
	return 0;
}