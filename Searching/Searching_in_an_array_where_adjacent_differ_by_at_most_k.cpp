#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Searching in an array where adjacent differ by at most k
    
    int t, n, k, x;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> ar(n);
        for(int i=0; i<n; i++)
            cin >> ar[i];
        cin >> x;
        int i = 0, flg = 0;
        while (i < n) { 
            if (ar[i] == x) {
                flg = 1;
                break; 
            }
            i = i + max(1, abs(ar[i]-x)/k);    // skip (ar[i]-x)/k elements ahead
        } 
        if(flg)
            cout << i << endl;
        else
            cout << -1 << endl;
    }
    
	return 0;
}