#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Min Subsets with Consecutive Numbers
    
    int t, n, cnt;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        cnt = 1;
        for(int i=1; i<n; i++) {
            if (a[i] != a[i-1]+1)
                cnt++;
        }
        cout << cnt << endl;
    }
    
	return 0;
}