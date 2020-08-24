#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Ishaan Loves Chocolates
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        int lo=0, hi=n-1;
        while(lo<=hi) {     // keep eliminating the larger el
            if(a[lo]>a[hi])
                lo++;
            else
                hi--;
        }
        cout << a[lo] << endl;
    }
    
	return 0;
}