#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Sort The Array
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        for(int i=0; i<n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    
	return 0;
}