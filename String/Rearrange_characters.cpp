#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Rearrange characters
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        unordered_map<char, int> freq;
        for(auto ch: s) {
            freq[ch]++;
        }
        int flg=0;
        for(auto f: freq) {
            if(f.second > n/2) {
                flg=1;
                break;
            }
        }
        if(flg)
            cout << "0\n";
        else
            cout << "1\n";
    }
    
	return 0;
}