#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Element appearing once
    
    int t, n, flg, curr;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        curr = -1;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(curr == -1)
                curr = a[i];
            else if(a[i] == curr)
                curr = -1;
        }
        cout << curr << endl;
    }
    
	return 0;
}