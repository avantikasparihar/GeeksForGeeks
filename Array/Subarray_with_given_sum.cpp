#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Subarray with given sum
    
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        int curr_sum=0, lo=0, hi=0, f=0;
        for(int j=0; j<n; j++) {
            curr_sum += a[j];
            if(curr_sum > s) {
                while(curr_sum > s) {
                    curr_sum -= a[lo];
                    lo++;
                }
            }
            if(curr_sum == s) {
                f=1;
                hi = j;
                break;
            }
        }
        if(f)
            cout << lo+1 << " " << hi+1 << endl;
        else
            cout << -1 << endl;
    }
    
	return 0;
}