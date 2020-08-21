#include<bits/stdc++.h>

using namespace std;

string caseSort(string str, int n){
    
    // only gravity will pull me down

    // Case-specific Sorting of Strings
    
    string low="", upp="", res="";
    map<int,int> mp;
    for(int i=0; i<n; i++) {
        if(str[i] >= 97 && str[i]<=122) {
            mp[i] = 1;
            low += str[i];
        }
        else {
            mp[i] = 0;
            upp += str[i];
        }
    }
    sort(low.begin(), low.end());
    sort(upp.begin(), upp.end());
    int idx1=0, idx2=0;
    for(int i=0; i<n; i++) {
        if(mp[i]) {
            res += low[idx1];
            idx1++;
        }
        else {
            res += upp[idx2];
            idx2++;
        }
    }
    return res;
}

int main()
 {
	// only gravity will pull me down

    // Case-specific Sorting of Strings
    
    int t, n;
    cin >> t;
    string s;
    while (t--) {
        cin >> n;
        cin >> s;
        cout << caseSort(s, n) << endl;
    }
    
	return 0;
}