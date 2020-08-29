#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Shortest Common Supersequence
    
    int t;
    cin >> t;
    string str1, str2;
    while (t--) {
        cin >> str1 >> str2;
        int m=str1.size(), n=str2.size();
        int dp[m+1][n+1];
        for(int i=0; i<=m; i++) {
            dp[i][0] = i;
        }
        for(int j=0; j<=n; j++) {
            dp[0][j] = j;
        }
        for(int i=1; i<=m; i++) {
            for(int j=1; j<=n; j++) {
                if(str1[i-1]==str2[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + 1;
            }
        }
        cout << dp[m][n] << endl;        
    }
    
	return 0;
}