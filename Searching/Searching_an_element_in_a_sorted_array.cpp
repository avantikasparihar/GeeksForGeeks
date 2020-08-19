#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
        if (arr[m] == x) 
            return m; 
        if (arr[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return -1; 
} 

int main()
 {
	// only gravity will pull me down

    // Searching an element in a sorted array
    
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        binarySearch(arr, 0, n-1, k) == -1? cout << -1 << endl: cout << 1 << endl;
    }
    
	return 0;
}