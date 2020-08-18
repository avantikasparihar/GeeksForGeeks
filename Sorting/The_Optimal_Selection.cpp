#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // The Optimal Selection
    
    int t, n, res;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        res = 0;
        for(int i=0; i<n; i++) {
            res += a[i]*i;
        }
        cout << res << endl;
    }
    
	return 0;
}