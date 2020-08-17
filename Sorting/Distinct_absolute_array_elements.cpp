#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Distinct absolute array elements
    
    int t, n, cnt;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<long long> a(n);
        map<long long, bool> mp;
        cnt = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(!mp[abs(a[i])]) {
                cnt++;
                mp[abs(a[i])] = true;
            }
        }
        cout << cnt << endl;
    }
    
	return 0;
}