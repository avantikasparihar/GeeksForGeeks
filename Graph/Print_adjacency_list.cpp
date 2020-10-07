#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Print adjacency list
    
    int t;
    cin >> t;
    while (t--) {
        int v,e,x,y;
        cin >> v >> e;
        vector<int> g[v];
        while(e--) {
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        int idx=0;
        for(auto i: g) {
            cout << idx;
            if(i.size())
                cout << "-> ";
            for(int j=0; j<i.size(); j++) {
                cout << i[j];
                if(j != i.size()-1)
                    cout << "-> ";
            }
            cout << endl;
            idx++;
        }
    }
    
	return 0;
}