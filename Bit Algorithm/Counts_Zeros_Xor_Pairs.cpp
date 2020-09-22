#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Counts Zeros Xor Pairs
    
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        map<int, int> freq;
        for(int i=0; i<n; i++) {
            cin >> x;
            freq[x]++;
        }
        int res=0;
        for(auto f: freq) {
            res += f.second*(f.second-1)/2;
        }
        cout << res << endl;
    }
    
	return 0;
}