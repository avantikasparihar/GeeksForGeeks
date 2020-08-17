#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Binary Array Sorting
    
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        int lo = 0, hi = n-1;    // Two pointers
        while(lo < hi) {
            if (a[lo] == 1 && a[hi] == 0) {
                swap(a[lo], a[hi]);
                lo++;
                hi--;
            }
            if (a[lo] == 0)
                lo++;
            if (a[hi] == 1)
                hi--;
        }
        for(int i=0; i<n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    
	return 0;
}