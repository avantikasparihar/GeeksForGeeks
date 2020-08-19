#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Doubling the value
    
    int t, n;
    long long b;
    cin >> t;
    while (t--) {
        cin >> n >> b;
        vector<long long> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] == b)
                b *= 2;
        }
        cout << b << endl;
    }
    
	return 0;
}