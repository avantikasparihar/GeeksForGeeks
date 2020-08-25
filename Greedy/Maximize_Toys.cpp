#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Maximize Toys
    
    int t, n, k, s, i;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        s=0;
        for(i=0; i<n; i++) {
            if(s+a[i]<k)
                s+=a[i];
            else
                break;
        }
        cout << i << endl;
    }
    
	return 0;
}