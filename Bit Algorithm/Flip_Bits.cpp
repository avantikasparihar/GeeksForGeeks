#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Flip Bits
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n], cnt1=0, cnt0=0, max0=0, currv=0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i]==1)
                cnt1++;
            int v = (arr[i]==0) ? -1 : 1;   // Kadane's algo(max sum of contigiuous subarray)
            currv = min(v, currv+v);
            max0 = max(max0, -currv);
        }
        cout << cnt1+max0 << endl;
    }
    
	return 0;
}