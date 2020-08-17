#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Sort in specific order
    
    int t;
    cin >> t;
    long long n, cntE, cntO, lo, hi;
    while (t--) {
        cin >> n;
        vector<long long> a(n);
        cntE = 0, cntO = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0)
                cntE++;
            else
                cntO++;
        }
        lo = 0, hi = n-1;
        while(lo < hi) {    // use two pointers to separate odd and even integers 
            if (a[lo] % 2 == 0 && a[hi] % 2 != 0) {
                swap(a[lo], a[hi]);
                lo++;
                hi--;
            }
            if (a[lo] % 2 != 0)
                lo++;
            if (a[hi] % 2 == 0)
                hi--;
        }    // now sort the two parts of the array separately
        sort(a.begin(), a.begin()+cntO);
        reverse(a.begin(), a.begin()+cntO);
        sort(a.begin()+cntO, a.end());
        for(int i=0; i<n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
	return 0;
}