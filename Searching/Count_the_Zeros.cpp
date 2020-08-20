#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Count the Zeros
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        int lo=0, hi=n-1, mid, flg=0;
        while(lo<=hi) {
            mid=(lo+hi)/2;
            if(a[mid]==1 && a[mid+1]==0) {
                flg=1;
                break;
            }
            else if(a[mid]==1)
                lo=mid+1;
            else
                hi=mid-1;
        }
        if(flg)
            cout << n-mid-1 << endl;
        else {
            if(a[0]==0)
                cout << n << endl;
            else
                cout << 0 << endl;
        }
    }
    
	return 0;
}