#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Reach the Nth point
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        size_t dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3; i<=n; i++) {
            dp[i] = dp[i-1]+dp[i-2];
        }
        cout << dp[n] << endl;
    }
    
	return 0;
}