#include<bits/stdc++.h>

using namespace std;

double force(double arr[], double i, int n){    // total force at a given point
    double x=0;
    for(int j=0;j<n;j++)
        x += (1/double(i-arr[j]));
    return x;
}

int main()
 {
	// only gravity will pull me down

    // Magnet Array Problem
    
    int t, n, flg;
    cin >> t;
    while (t--) {
        cin >> n;
        double m[n];
        for(auto &x: m)
            cin >> x;
        cout << fixed << setprecision(2);
        for(int i=1; i<n; i++) {
            double lo=m[i-1], hi=m[i], mid;
            while(lo<hi) {    // binary search to find a point with zero resultant force 
                mid=(lo+hi)/2;
                double x=force(m,mid,n);
                flg=0;
                if(abs(x)<1e-9) {
                    cout << mid << " ";
                    flg=1;
                    break;
                }
                else if(x>0)
                    lo=mid;
                else
                    hi=mid;
            }
            if(!flg)
                cout << lo << " ";
        }
        cout << endl;
    }
    
	return 0;
}