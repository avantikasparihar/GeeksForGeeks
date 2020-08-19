#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Elements in the Range
    
    int t, n, A, B, flg;
    cin >> t;
    while (t--) {
        cin >> n >> A >> B;
        map<int, bool> mp;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
            mp[a[i]] = true;
        }
        flg = 0;
        for(int i=A; i<=B; i++) 
            if(!mp[i]) {
                flg = 1;
                break;
            }
        flg ? cout << "No\n" : cout << "Yes\n";
    }
    
	return 0;
}