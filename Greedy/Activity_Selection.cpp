#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    return p1.second<p2.second;
}

int main()
 {
	// only gravity will pull me down

    // Activity Selection
    
    int t, n, s, f;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<pair<int, int>> sf(n);
        for(int i=0; i<n; i++) {
            cin >> sf[i].first;
        }
        for(int i=0; i<n; i++) {
            cin >> sf[i].second;
        }
        sort(sf.begin(), sf.end(), cmp);
        int cnt = 1, curr = sf[0].second;
        for(int i=1; i<n; i++) {
            if(sf[i].first >= curr) {
                cnt++;
                curr = sf[i].second;
            }
        }
        cout << cnt << endl;
    }
    
	return 0;
}