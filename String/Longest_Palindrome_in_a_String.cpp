#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Longest Palindrome in a String
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size(), res = 0, st = 0, en = 0;
        for(int i=0; i<n; i++) {
            int lo = i, hi = n-1, end = n-1;
            while(lo<hi) {
                if(lo==i && s[lo] != s[hi])
                    hi--, end--;
                else if(s[lo] == s[hi])
                    hi--, lo++;
                else {
                    hi--;
                    end = hi;
                    lo = i;
                }
            }
            if(end-i+1 > res) 
                st = i, en = end, res = end-i+1;
        }
        for(int i=st; i<=en; i++)
            cout << s[i];
        cout << endl;
    }
    
	return 0;
}