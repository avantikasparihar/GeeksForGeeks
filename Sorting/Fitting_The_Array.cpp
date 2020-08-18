#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Fitting The Array
    
    int t, n, flg;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        flg = 0;
        for(int i=0; i<n; i++) {
            if(a[i] > b[i]) {
                flg = 1;
                break;
            }
        }
        if(flg)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    
	return 0;
}