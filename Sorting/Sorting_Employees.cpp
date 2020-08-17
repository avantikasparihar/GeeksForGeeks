#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Sorting Employees
    
    int t, n;
    cin >> t;
    long long s;
    string e;
    while (t--) {
        cin >> n;
        map<long long, vector<string>> mp;
        for(int i=0; i<n; i++) {
            cin >> e;
            cin >> s;
            mp[s].push_back(e);
        }
        for(auto m: mp) {
            sort(m.second.begin(), m.second.end());
            for(auto s: m.second)
                cout << s << " " << m.first << " ";
        }    
        cout << endl;
    }
    
	return 0;
}