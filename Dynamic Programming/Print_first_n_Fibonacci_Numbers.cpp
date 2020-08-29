#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Print first n Fibonacci Numbers
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long dp[n+1];
        dp[1] = 1;
        dp[2] = 1;
        for(int i=3; i<=n; i++)
            dp[i] = dp[i-1] + dp[i-2];
        for(int i=1; i<=n; i++)
            cout << dp[i] << " ";
        cout << endl;
    }
    
	return 0;
}