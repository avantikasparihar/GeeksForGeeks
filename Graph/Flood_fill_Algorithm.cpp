#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Flood fill Algorithm
    
    int t;
    cin >> t;
    while (t--) {
        int n,m,x,y,k;
        cin >> n >> m;
        int M[n][m];
        int X[]={0,0,1,-1};    // helper arrays for finding out adjacent cells
        int Y[]={1,-1,0,0};
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin >> M[i][j];
        cin >> x >> y >> k;
        stack<pair<int,int>> st;
        st.push({x,y});
        int clr = M[x][y];
        M[x][y] = k;
        while(!st.empty()) {    // dfs
            auto p = st.top();
            st.pop();
            for(int i=0; i<4; i++) {
                int a = p.first + X[i];
                int b = p.second + Y[i];
                if((a<n&&a>=0) && (b<m&&b>=0) && M[a][b]==clr) {
                    M[a][b]=k;
                    st.push({a,b});
                }
            }
        }
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cout << M[i][j] << " ";
        cout << endl;
    }
    
	return 0;
}