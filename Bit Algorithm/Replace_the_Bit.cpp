#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Replace the Bit
    
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int tmp=n, cnt=0;
        while(tmp) {
            cnt++;
            tmp=tmp>>1;
        }
        int p = pow(2, cnt-k);
        if(n & p) {   // if kth bit is 1
            cout << n-p << endl;
        }
        else {
            cout << n << endl;
        }
    }
    
	return 0;
}