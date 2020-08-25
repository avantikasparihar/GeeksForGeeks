#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Shop in Candy Store
    
    int t, n, k, x, ans1, ans2;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        if(n%(k+1))
            x = n/(k+1) + 1;
        else
            x = n/(k+1);
        ans1 = 0, ans2 = 0;
        for(int i=0; i<x; i++) {
            ans1+=a[i];
            ans2+=a[n-i-1];
        }
        cout << ans1 << " " << ans2 << endl;
    }
    
	return 0;
}