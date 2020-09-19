#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Bit Difference
    
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int cnt = 0;
        while(a || b) {
            if((a&1) ^ (b&1))
                cnt++;
            a = a >> 1;
            b = b >> 1;
        }
        cout << cnt << endl;
    }
    
	return 0;
}