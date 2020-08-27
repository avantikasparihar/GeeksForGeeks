#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Minimum Platforms
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n], dep[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++)
            cin >> dep[i];
        sort(arr, arr + n); 
        sort(dep, dep + n); 
        int plat_needed = 1, result = 1; 
        int i = 1, j = 0; 
        while (i < n && j < n) { 
            if (arr[i] <= dep[j]) { 
                plat_needed++; 
                i++; 
            } 
            else if (arr[i] > dep[j]) { 
                plat_needed--; 
                j++; 
            } 
            if (plat_needed > result) 
                result = plat_needed; 
        } 
        cout << result << endl;
    }
    
	return 0;
}