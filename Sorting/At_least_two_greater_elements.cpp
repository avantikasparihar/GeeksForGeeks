#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

	// At least two greater elements
	
	int t, n, mxx, mx;
	cin >> t;
	while(t--) {
	    cin >> n;
	    vector<int> a(n);
	        
	    for(int i=0; i<n; i++) {
	        cin >> a[i];
	    }
	    sort(a.begin(), a.end());
	    for(int i=0; i<n-2; i++) {
	        if (a[i] != mxx && a[i] != mx)
	            cout << a[i] << " ";
	    }
	    cout << endl;
	}
    
	return 0;
}