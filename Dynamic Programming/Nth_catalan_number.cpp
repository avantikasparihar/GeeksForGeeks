#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>     // big integer library for cpp

using namespace boost::multiprecision; 

using namespace std;


int main()
 {
	// only gravity will pull me down

    // Nth catalan number
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int256_t dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for (int i=2; i<=n; i++) { 
            dp[i] = 0; 
            for (int j=0; j<i; j++) 
                dp[i] += dp[j] * dp[i-j-1]; 
        } 
        cout << dp[n] << endl;
    }
    
	return 0;
}