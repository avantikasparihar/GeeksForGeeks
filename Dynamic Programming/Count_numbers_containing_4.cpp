#include<bits/stdc++.h>

using namespace std;

int cnt4(int n) {
    if(n<4)
        return 0;
    int d = log10(n);   // no of digits-1 in n 
    int dp[d+2];    // dp for storing no.s with digit 4 from 0-9, 10-99, 100-999, etc
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=d; i++) {
        dp[i] = dp[i-1]*9 + pow(10,i-1);
    }
    int p = pow(10,d);   
    int msd = n/p;    // most sig. digit
    if(msd == 4) 
        return msd*dp[d] + n%p + 1;
    else if(msd > 4)
        return (msd-1)*dp[d] + p + cnt4(n%p);
    return msd*dp[d] + cnt4(n%p);
}

int main()
 {
	// only gravity will pull me down

    // Count numbers containing 4
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << cnt4(n) << endl;
    }
    
	return 0;
}