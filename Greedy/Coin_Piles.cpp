#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Coin Piles
    
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> a(n);
        map<int, int> freq;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        sort(a.begin(), a.end());
        long long cnt, ans = INT_MAX, s=0, minn;
        for (int j = 0; j < n; j++) {
            cnt = 0;
            minn = a[j];
            for (int i = 0; i < n; i++) { 
                int diff = a[i] - minn; 
                if(diff > k) { 
                    cnt += (diff - k); 
                } 
            } 
            if(cnt+s < ans)
                ans = cnt+s;
            s += a[j];
        }
        cout << ans << endl;
    }
    
	return 0;
}