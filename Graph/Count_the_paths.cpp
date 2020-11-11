#include<bits/stdc++.h>

using namespace std;

void dfs(vector<int> g[], vector<bool> &vis, int s, int d, long long &res) {
    if(s == d) {
        res++;
        return;
    }
    vis[s]=true;
    for(auto x: g[s]) {
        if(!vis[x])
            dfs(g,vis,x,d,res);
    }
    vis[s]=false;
}

int main()
 {
	// only gravity will pull me down

    // Count the paths
    
    int t,v,e;
    cin >> t;
    while (t--) {
        cin >> v >> e;
        int x,y,s,d;
        vector<int> g[v];
        for(int i=0; i<e; i++) {
            cin >> x >> y;
            g[x].push_back(y);
        }
        cin >> s >> d;
        long long res=0;
        vector<bool> vis(v);
        dfs(g,vis,s,d,res);
        cout << res << endl;
    }
    
	return 0;
}