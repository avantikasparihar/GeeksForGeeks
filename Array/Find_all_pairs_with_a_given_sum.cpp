#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Find all pairs with a given sum
    
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, el;
        cin >> n >> m >> x;
        vector<int> a(n);
        unordered_map<int, bool> b;
        map<int, int> res;
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        for(int i=0; i<m; i++) {
            cin >> el;
            b[el] = true;
        }
        for(int j=0; j<n; j++) {
            if(b[x-a[j]])
                res[a[j]] = x-a[j];
        }
        int i=0, sz=res.size();
        for(auto r: res) {
            cout << r.first << " " << r.second;
            i++;
            if(i!=sz)
                cout << ", ";
        }
        if(!res.size())
            cout << -1;
        cout << endl;
    }
    
	return 0;
}