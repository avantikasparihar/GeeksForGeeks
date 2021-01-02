#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Length of the longest substring
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int res = 0;
        for(int i=0; i<n; i++) {
            unordered_map<char, bool> ump;
            int tmp = 0;
            for(int j=i; j<n; j++) {
                if(!ump[s[j]]) {
                    tmp++;
                    ump[s[j]] = true;
                }
                else
                    break;
            }
            res = max(res, tmp);
        }
        cout << res << endl;
    }
    
	return 0;
}