#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Missing number in array
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int c, a, b;
        cin >> c;
        a = c;
        for(int i=1; i<n-1; i++) {
            cin >> c;
            a = a^c;
        }
        b = 1;
        for(int i=2; i<=n; i++) {
            b = b^i;
        }
        a = a^b;
        cout << a << endl;
    }
    
	return 0;
}