#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Sort a String
    
    int t, n;
    cin >> t;
    string s;
    while (t--) {
        cin >> n;
        cin >> s;
        sort(s.begin(), s.end());
        cout << s << endl;
    }
    
	return 0;
}