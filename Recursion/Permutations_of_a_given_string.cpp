#include <bits/stdc++.h>

using namespace std;

void recursion(vector<string> &res, string str, int lo, int hi, int n) {
    if (lo == hi) {    // base case
        res.push_back(str);
        return;
    }
    for (int i = lo; i <= hi; i++) {
        swap(str[lo], str[i]);
        recursion(res, str, lo+1, hi, n);
        swap(str[lo], str[i]);
    }
}    // easier alternative : next_permutation(str.begin(), str.end());

int main() {
	// only gravity will pull me down

	// Permutations of a given string
	
	int t;
	cin >> t;
	string s;
	while (t--) {
	    cin >> s;
	    sort(s.begin(), s.end());
	    vector<string> res;
	    recursion(res, s, 0, s.length()-1, s.length());
	    sort(res.begin(), res.end());    // sort before printing for lexicographical order
	    for (string r: res) {
	        cout << r << " ";
	    }
	    cout << endl;
	}
	return 0;
}