#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Minimum Operations
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int dp[n+1];
        dp[1]=1;
        dp[2]=2;
        for(int i=3; i<=n; i++) {
            if(i%2)
                dp[i] = min(dp[(i-1)/2]+2, dp[i-1]+1);
            else
                dp[i] = min(dp[i/2]+1, dp[i-1]+1);
        }
        cout << dp[n] << endl;
    }
    
	return 0;
}