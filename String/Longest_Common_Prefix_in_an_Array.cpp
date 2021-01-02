#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Longest Common Prefix in an Array
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> vs(n);
        string res;
        cin >> res;
        for(int i=1; i<n; i++) {
            cin >> vs[i];
            int idx = 0, n1 = vs[i].size(), n2 = res.size();
            string tmp = "";
            while(idx < n1 && idx < n2) {
                if(vs[i][idx] == res[idx])
                    tmp += res[idx];
                else
                    break;
                idx++;
            }
            res = tmp;
        }
        if(res == "")
            cout << -1 << endl;
        else
            cout << res << endl;
    }
    
	return 0;
}