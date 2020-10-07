/* You have to complete this function*/

/* Function to do BFS of graph
*  g[]: adj list of the graph
*  N : number of vertices
*/

vector <int> bfs(vector<int> g[], int N) {

    // only gravity will pull me down

    // BFS of graph

    vector<bool> vis(N);
    vector<int> res;
    vis[0] = true;
    queue<int> q;
    q.push(0);
    while(!q.empty()) {
        int x = q.front();
        res.push_back(x);
        q.pop();
        for(auto i: g[x]) {
            if(!vis[i]) {
                vis[i] = true;
                q.push(i);
            }
        }
    }
    return res;
}