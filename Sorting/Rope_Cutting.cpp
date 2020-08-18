#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Rope Cutting
    
    int t, n, flg;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> ar(n);
        map<int, int> freq;
        for(int i=0; i<n; i++) {
            cin >> ar[i];
            freq[ar[i]]++;
        }
        flg = 0;
        for(auto x: freq) {
            n -= x.second;
            if (n!=0) {
                flg = 1;
                cout << n << " ";
            }
        }
        if(!flg)
            cout << 0;
        cout << endl;
    }
    
	return 0;
}