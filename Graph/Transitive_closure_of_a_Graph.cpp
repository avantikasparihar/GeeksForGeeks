#include<bits/stdc++.h>

using namespace std;

void dfs(vector<int> adj[], int s, int d, int res[101][101]) {
    res[s][d]=1;
    for(auto x: adj[d]) {
        if(!res[s][x])
            dfs(adj, s, x, res);
    }
}

int main()
 {
    // only gravity will pull me down

    // Transitive closure of a Graph
    
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        
        vector<int> adj[n];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) {
                cin >> x;
                if(x) {
                    adj[i].push_back(j);
                }
            }
        int res[101][101] = {{0}};
        for(int i=0; i<n; i++)
            dfs(adj, i, i, res);
            
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cout << res[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}