#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Padovan Sequence
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long p[n+2];
        p[0]=1;
        p[1]=1;
        p[2]=1;
        for(int i=3; i<=n; i++)
            p[i] = p[i-2] + p[i-3];
        cout << p[n]%1000000007 << endl;
    }
    
	return 0;
}