#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Facing the sun
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<long long> h(n);
        int cnt = 1;
        cin >> h[0];
        long long curr = h[0];
        for(int i=1; i<n; i++) {
            cin >> h[i];
            if(h[i]>curr) {
                cnt++;
                curr = h[i];
            }
        }
        cout << cnt << endl;
    }
    
	return 0;
}