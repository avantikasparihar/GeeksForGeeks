#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Good Pairs
    
    int t, n, res;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        sort(a.begin(), a.end());
        res = 0;
        for(int i=1; i<n; i++) {
            if(a[i] != a[i-1])
                res += (freq[a[i-1]] * (n-i));
        }
        cout << res << endl;
    }
    
	return 0;
}