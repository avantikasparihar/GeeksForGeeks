/*
 * Function to find if there is a mother vertex in the given graph 
 * V: number of vertices in the graph
 * g[]: graph representation
 */

void dfs(int s, vector<int> g[], vector<bool> &vis) {
    vis[s] = true;
    for(auto x: g[s]) {
        if(!vis[x])
            dfs(x,g,vis);
    }
}

int findMother(int V, vector<int> g[]) 
{ 
    // only gravity will pull me down

    // Mother Vertex

    vector<bool> vis(V);
    int res;
    for(int i=0; i<V; i++) {
        if(!vis[i]) {
            dfs(i,g,vis);
            res = i;
        }   // the last vertex that is passed in dfs is the mother vertex
    }
    fill(vis.begin(), vis.end(), false);
    dfs(res,g,vis);    // perform dfs on supposed mother vertex
    for(int i=0; i<V; i++)
        if(!vis[i])    // if any node remains unvisited, res is not the mother vertex
            return -1;

    return res;
} 