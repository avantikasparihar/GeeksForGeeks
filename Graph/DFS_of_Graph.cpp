/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/
void dfss(vector<int> g[], int i, vector<bool> vis, vector<int> &res) {   // recursive dfs
    if(vis[i])
        return;
    res.push_back(i);
    vis[i] = true;
    for(auto x: g[i]) {
        if(!vis[x])
            dfss(g, x, vis, res);
    }
}

vector <int> dfs(vector<int> g[], int N) {

    // only gravity will pull me down

    // DFS of Graph

    vector<int> res;
    vector<bool> vis(N);
    dfss(g, 0, vis, res);
    
    return res;
}