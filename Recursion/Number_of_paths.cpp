#include <bits/stdc++.h>
using namespace std;

int m, n;

void recursion(int &cnt, int i, int j) {    // cnt passed as reference
    if (i == m-1 || j == n-1) {    // base condition
        cnt++;
        return;
    }
    if (i< m-1 && j < n-1) {    // recursion
        recursion(cnt, i+1, j);
        recursion(cnt, i, j+1);
    }
}

int main() {
    
	// only gravity will pullme down

    // Number of paths
	
    int t;
    cin >> t;
    while (t--) {
        cin >> m >> n;
        int cnt = 0;
        recursion(cnt, 0, 0);
        cout << cnt << endl;
    }
	return 0;
}