#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

	// Count total set bits
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int cnt=0, idx=0;
        while((idx<<1) <= n) {
            bool f=0;
            int x = 1<<idx;
            for(int i=0; i<=n; i++) {	// counts bits vertically on pos idx from right
                cnt += f;
                if(x == 1) {
                    f = !f;   // flip after every 2^idx bits(in a verticle manner)
                    x = 1<<idx;   // reset x to 2^idx after flipping f
                }
                else {
                    x--;
                }
            }
            idx++;
        }
        cout << cnt << endl;
    }
    
	return 0;
}