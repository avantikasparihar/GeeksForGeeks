#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Maximum value in a bitonic array
    
    int t;
    cin >> t;
    long long n, ans;
    while (t--) {
        cin >> n;
        vector<long long> a(n);
        cin >> a[0];
        int flg=0;
        for(int i=1; i<n; i++) {
            cin >> a[i];
            if(!flg && a[i]<a[i-1]) {
                ans=a[i-1];
                flg=1;
            }
        }
        if(!flg)
            cout << a[n-1] << endl;
        else
            cout << ans << endl;
    }
    
	return 0;
}