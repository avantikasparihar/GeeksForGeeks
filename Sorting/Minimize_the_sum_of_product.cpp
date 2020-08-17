#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Minimize the sum of product
    
    int t;
    cin >> t;
    long long n, res;
    while (t--) {
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        for(int i=0; i<n; i++) {
            cin >> b[i];
        }
        res = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i=0; i<n; i++) {
            res += a[i]*b[n-i-1];
        }
        cout << res << endl;
    }
    
	return 0;
}