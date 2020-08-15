#include <bits/stdc++.h>
using namespace std;

void recursion(map<int, bool> &mp, vector<int> &a, int n) {
    if (n <= 0)    // top of the recursion stack would be the first term of 'a'
        return;
        
    recursion(mp, a, n-1);	 // recursion stack keeps filling till n is 1 and then the statements below this start executing starting from the first term till n-1
    
    if (a.size() == n) {
        if (a[n-1]-n > 0 && !mp[a[n-1]-n]) {
            mp[a[n-1]-n] =  true;
            a.push_back(a[n-1]-n);
        }
        else {
            mp[a[n-1]+n] =  true;
            a.push_back(a[n-1]+n);
        }
    }
}

int main() {
	// only gravity will pull me down

	// Recaman’s sequence
	
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    map<int, bool> mp;
	    mp[0] = true;
	    vector<int> a;
	    a.push_back(0);
	    recursion(mp, a, n-1);    // n-1 because first term has already been pushed
	    for(auto i: a) {
	        cout << i << " ";
	    }
	    cout << endl;
	}
	
	return 0;
}