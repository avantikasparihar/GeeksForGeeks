#include<bits/stdc++.h>

using namespace std;

int partition(vector<int> &arr, int l, int r) {    // takes last el as pivot and puts smaller els on left and larger els on right of the pivot
    int x=arr[r], idx=l;
    for(int i=l; i<r; i++) {
        if(arr[i]<=x) {
            swap(arr[idx], arr[i]);
            idx++;
        }
    }
    swap(arr[idx], arr[r]);
    return idx;
}

int main()
 {
	// only gravity will pull me down

    // Kth smallest element
    
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        cin >> k;
        int l=0, r=n-1, pos, res;
        while(k>0 && k<=r-l+1) {    // based on quick sort
            pos = partition(arr, l, r);
            if(pos-l == k-1) {
                res = arr[pos];
                break;
            }
            else if(pos-l > k-1) {
                r = pos-1;
            }
            else {
                k = k-pos+l-1;
                l = pos+1;
            }
        }    // O(n) - avg time and O(n^2) - worst time, O(1) space
        cout << res << endl;
    }
    
	return 0;
}