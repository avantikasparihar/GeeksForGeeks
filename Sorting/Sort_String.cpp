#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

	// Sort String
	
	int t;
	cin >> t;
	string s;
	while(t--) {
	    cin >> s;
	    sort(s.begin(), s.end());	// sorry, not sorry :)
	    cout << s <<  endl;
	}
    
	return 0;
}