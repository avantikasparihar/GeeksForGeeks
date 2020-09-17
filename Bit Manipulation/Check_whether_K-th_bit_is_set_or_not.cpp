#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Check whether K-th bit is set or not
    
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        if(k)
            n = n >> k;
        if(n&1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    
	return 0;
}