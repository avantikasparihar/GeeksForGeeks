#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {    // for sorting a vector of pairs by the second el of the pair
    return p1.second < p2.second;
}

int main()
 {
	// only gravity will pull me down

    // N meetings in one room
    
    int t, n, cnt;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> s(n), f(n);
        map<int, int> mp;
        vector<pair<int, int>> prs;
        map<pair<int, int>, int> order;
        for(int i=0; i<n; i++) {
            cin >> s[i];
        }
        for(int i=0; i<n; i++) {
            cin >> f[i];  
            mp[f[i]] = s[i];
            prs.push_back({s[i], f[i]});
            order[{s[i], f[i]}] = i+1;
        }
        sort(prs.begin(), prs.end(), cmp);    // specific type of sorting
        int curr = prs[0].second;
        cout << order[{prs[0].first, prs[0].second}] << " ";
        for(int i=1; i<n; i++) {
            if(prs[i].first >= curr) {
                cout << order[{prs[i].first, prs[i].second}] << " ";
                curr = prs[i].second;
            }
        }
        cout << endl;
    }
    
	return 0;
}