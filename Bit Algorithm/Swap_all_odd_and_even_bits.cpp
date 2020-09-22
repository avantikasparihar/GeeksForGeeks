#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Swap all odd and even bits
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int i=0, res=0;
        while(n) {
            if(i&1) {
                res += (n&1)*pow(2, i-1);
            }
            else {
                res += (n&1)*pow(2, i+1);
            }
            i++;
            n = n>>1;
        }
        cout << res << endl;
    }
    
	return 0;
}