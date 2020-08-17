#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Count pair sum
    
    int t;
    cin >> t;
    long long n, m, x, cnt;
    while (t--) {
        cin >> m >> n;
        vector<int> a(m), b(n);
        map<long long, bool> mp_b;
        for(int i=0; i<m; i++)
            cin >> a[i];
        for(int i=0; i<n; i++) {
            cin >> b[i];
            mp_b[b[i]] = true;
        }
        cin >> x;
        cnt = 0;
        for(auto i: a) {
            if (mp_b[x-i])
                cnt++;
        }
        cout << cnt << endl;
    }
    
	return 0;
}