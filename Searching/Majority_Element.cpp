#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Majority Element
    
    int t, flg;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        flg = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            freq[a[i]]++;
            if(!flg && freq[a[i]] > n/2) {
                flg = 1;
                cout << a[i] << endl;
            }
        }
        if(!flg)
            cout << -1 << endl;
    }
    
	return 0;
}