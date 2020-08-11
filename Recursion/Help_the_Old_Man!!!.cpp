#include <bits/stdc++.h>
using namespace std;

void recursion(int N, int from, int to, int ex, int &cnt, int n) {    // same as Tower of Hanoi
    if (N == 1) {
        cnt++;
        if(cnt == n)
            cout << from << " " << to << endl;
        return;
    }
    recursion(N-1, from, ex, to, cnt, n);
    cnt++;
    if (cnt == n)
        cout << from << " " << to << endl;
    recursion(N-1, ex, to, from, cnt, n);
}

int main() {
	// only gravity will pull me down

    // Help the Old Man!!!
	
	int t, N, n, cnt;
	cin >> t;
	while (t--) {
	    cin >> N >> n;
	    cnt = 0;
	    recursion(N, 1, 3, 2, cnt, n);
	}
	return 0;
}