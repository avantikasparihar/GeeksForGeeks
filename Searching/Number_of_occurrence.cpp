#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Number of occurrence
    
    int t, n, x, lo, hi, mid, flg, m, cnt;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        lo = 0, hi = n-1, flg = 0;
        while(lo<=hi) {
            mid = (lo+hi)/2;
            if(a[mid] == x) {
                flg = 1;
                break;
            }
            else if(x > a[mid])
                lo = mid+1;
            else
                hi = mid-1;
        }
        if(!flg)
            cout << -1 << endl;
        else {
            cnt = 0;
            m = mid;
            while(a[m] == x) {
                cnt++;
                m--;
            }
            m = mid+1;
            while(a[m] == x) {
                cnt++;
                m++;
            }
            cout << cnt << endl;
        }
    }
    
	return 0;
}