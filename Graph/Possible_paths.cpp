#include<bits/stdc++.h>

using namespace std;

int n,k,u,v;
int g[20][20];

int dfs(int u, int v, int k) {
    int count[n][n][k + 1]; 
    
    for (int e = 0; e <= k; e++) {    // dfs + dp
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < n; j++) { 
                count[i][j][e] = 0; 
                if (e == 0 && i == j) 
                    count[i][j][e] = 1; 
                if (e == 1 && g[i][j]) 
                    count[i][j][e] = 1; 
                if (e > 1) { 
                    for (int a = 0; a < n; a++)
                        if (g[i][a]) 
                            count[i][j][e] += count[a][j][e - 1]; 
                } 
            } 
        } 
    } 
    
    return count[u][v][k]; 
}

int main()
 {
	// only gravity will pull me down

    // Possible paths
    
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin >> g[i][j];
        cin >> u >> v >> k;
        stack<int> st;
        st.push(u);
        cout << dfs(u,v,k) << endl;
    }
    
	return 0;
}