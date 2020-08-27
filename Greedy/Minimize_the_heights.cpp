#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Minimize the heights
    
    int t, k, n;
    cin >> t;
    while (t--) {
        cin >> k;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        if(n==1) {
            cout << 0 << endl;
            continue;
        }
        sort(a, a+n);
        int minn = a[0]+k, maxx = a[n-1]-k;
        int diff = a[n-1]-a[0]-2*k, diff1, diff2;
        for(int i=0; i<n; i++) {
            int op1=a[i]-k, op2=a[i]+k, f1=0, f2=0;
            if(op1<minn && op2>maxx) {
                diff1=maxx-op1;
                diff2=op2-minn;
                if(diff1<diff2) {
                    diff = diff1;
                    minn = op1;
                }
                else {
                    diff = diff2;
                    maxx = op2;
                }
            }
        }
        cout << diff << endl;
    }
    
	return 0;
}