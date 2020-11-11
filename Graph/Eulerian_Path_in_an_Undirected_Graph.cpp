#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Eulerian Path in an Undirected Graph
    
    int t;
    cin >> t;
    while (t--) {
        int n,x,cnt=0,odd=0;
        cin >> n;
        for(int i=0; i<n; i++) {
            cnt=0;
            for(int j=0; j<n; j++) {
                cin >> x;
                if(x) 
                    cnt++;
            }
            if(cnt&1)
                odd++;
        }
        if(odd==2)   // if no of odd degree nodes is 2 then eulerian path exists
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    
	return 0;
}