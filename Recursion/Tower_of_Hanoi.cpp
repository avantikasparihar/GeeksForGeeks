#include <bits/stdc++.h>

using namespace std;

int cnt;

void TowerOfHanoi(int n, int from, int to, int ex, int &cnt) {
    if (n == 1) {    // base case
        cout << "move disk 1 from rod " << from << " to rod " << to << endl;
        cnt++;
        return;
    }
    TowerOfHanoi(n-1, from, ex, to, cnt);
    cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
    cnt++;
    TowerOfHanoi(n-1, ex, to, from, cnt);
}

int main() {
	// only gravity will pull me down

	// Tower of Hanoi
	
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    cnt = 0;
	    TowerOfHanoi(n, 1, 3, 2, cnt);
	    cout << cnt << endl;
	}
	
	return 0;
}