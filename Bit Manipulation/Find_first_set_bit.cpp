#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Find first set bit
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int pos=1;
        if(!n) {
            cout << 0 << endl;
            continue;
        }
        while(!(n&1)) {
            n = n >> 1;
            pos++;
        }
        cout << pos << endl;
    }
    
	return 0;
}