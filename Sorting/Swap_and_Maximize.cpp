#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Swap and Maximize
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long res = 0;
        vector<long long> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        swap(a[0], a[n-1]);
        for(int i=1; i<n; i++) {
            if (i < n/2 && i % 2 == 0)
                swap(a[i], a[n-i-1]);    // swap the next smallest number with the next largest number
            res += abs(a[i]-a[i-1]);
        }
        res += abs(a[n-1]-a[0]);
        cout << res << endl;
    }
    
	return 0;
}