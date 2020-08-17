#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down
    
    // Friendly Array

    int t;
    cin >> t;
    long long n, res;
    while (t--) {
        cin >> n;
        res = 0;
        vector<long long> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        res += (a[1]-a[0]);
        for(int i=1; i<n-1; i++)
            res += min((a[i]-a[i-1]), (a[i+1]-a[i]));
        res += (a[n-1]-a[n-2]);
        cout << res << endl;
    }
	return 0;
}