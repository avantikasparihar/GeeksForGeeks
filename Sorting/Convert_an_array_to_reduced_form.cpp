#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Convert an array to reduced form
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        map<int, int> mp;
        int arr[n], arrc[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            arrc[i] = arr[i];
        }
        sort(arrc, arrc+n);
        for(int i=0; i<n; i++) {
            mp[arrc[i]] = i;
        }
        for(int i=0; i<n; i++) 
            cout << mp[arr[i]] << " ";
        cout << endl;
    }
    
	return 0;
}