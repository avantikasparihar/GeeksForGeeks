#include<bits/stdc++.h>

using namespace std;

int main()
 {
    // only gravity will pull me down

    // Villain Con
    
    int t;
    cin >> t;
    while (t--) {
        int n, e, u, v;
        cin >> n >> e;
        list<int> arr[n];
        vector<int> count(n, 0), color(n, 1);
        for (int x = 0; x<e; x++) {
            cin >> u >> v;
            arr[v-1].push_back(u-1); // Reverse Graph
            count[u-1]++;
        }
        queue<int> q;
        for (int x = 0; x<n; x++) {
            if (!count[x])
                q.push(x);
        }
        v=INT_MIN;
        while (!q.empty()) {    // dfs
            u = q.front(); q.pop();
            for(auto x : arr[u]){
                count[x]--;
                if(!count[x])
                    q.push(x);
                if (color[x] <= color[u]){
                    color[x] = color[u] + 1;
                    v=max(v,color[x]);
                }
            }
        }
        cout << v << endl;
    }
    
    return 0;
}