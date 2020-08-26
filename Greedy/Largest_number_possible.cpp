#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Largest number possible
    
    int t, n, s, flg;
    cin >> t;
    while (t--) {
        flg = 0;
        cin >> n >> s;
        if((double)s/9 > n || !s)
            cout << -1 << endl;
        else {
            for(int i=0; i<s/9; i++)
                cout << 9;
            if(s%9) {
                cout << s%9;
                flg = 1;
            }
            for(int i=0; i<(n-s/9-flg); i++)
                cout << 0;
            cout << endl;
        }
    }
    
	return 0;
}