#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Smallest Positive missing number
    
    int t;
    cin >> t;
    while (t--) {
        int n, cnt = 0;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] > 0)
                cnt++;
        }
        int res = 1;
        for(int i=0; i<n; i++) {
            while(cnt && a[i] > 0 && a[i] <= cnt && a[a[i]-1] != a[i]) {
                swap(a[a[i]-1], a[i]);
                cnt--;
            }
            if(!cnt)
                break;
        }
        for(int i=0; i<n; i++) {
            if(a[i] != i+1) {
                res = i+1;
                break;
            }
        }
        cout << res << endl;
    }
    
	return 0;
}