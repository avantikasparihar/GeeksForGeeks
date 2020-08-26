#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Raju and coins
    
    int t, n, k, cnt, x, ans;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> a(n);
        map<int, bool> mp;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            mp[a[i]] = true;
        }
        cnt = 0, x = 1, ans = 0;
        while(k) {
            if(mp[x])
                cnt++;
            else if(k>=x) {
                ans++;
                k-=x;
            }
            else
                k = 0;
            x++;
        }
        cout << ans << endl;
    }
    
	return 0;
}