#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Smallest number
    
    int t, s, d;
    cin >> t;
    while (t--) {
        cin >> s >> d;
        int pos=0, n=0;
        while(pos<d) {
            if(pos == d-1 && s<=9) {
                n += s*pow(10, pos);
                s = 0;
                break;
            }
            if(s>9) {
                n += 9*pow(10, pos);
                s -= 9;
            }
            else {
                n += (s-1)*pow(10, pos);
                s = 1;
            }
            pos++;
        }
        if(s)
            cout << -1 << endl;
        else
            cout << n << endl;
    }
    
	return 0;
}