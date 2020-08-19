#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Last index of One
    
    int t, flg;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        flg = 0;
        for(int i=s.length()-1; i>=0; i--) {
            if(s[i] == '1') {
                flg = 1;
                cout << i << endl;
                break;
            }
        }
        if(!flg)
            cout << -1 << endl;
    }
    
	return 0;
}