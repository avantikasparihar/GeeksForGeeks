#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Kth smallest element
    
    int t, n, k, res;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        cin >> k;
        int maxx = 0;  
        for (int i = 0; i < n; i++) { 
            if (arr[i] > maxx) 
                maxx = arr[i]; 
        } 
        int freq[maxx+ 1] = { 0 }; 
        int sm = 0;  
        for (int i = 0; i < n; i++) {   // using count sort
            freq[arr[i]]++; 
        } 
        for (res = 1; res <= maxx; res++) { 
            if (freq[res] > 0) { 
                sm += freq[res]; 
            } 
            if (sm >= k) { 
                break;
            } 
        }   // O(n) time, O(m) space where m is the max el
            
        cout << res << endl;
        }
    
	return 0;
}