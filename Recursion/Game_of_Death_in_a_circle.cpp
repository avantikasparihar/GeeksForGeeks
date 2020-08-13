#include <bits/stdc++.h>
#include <vector>

using namespace std;

int recursion(int n, int k) {
    if (n == 1)
        return 1;
    return (recursion(n-1, k) + k-1) % n + 1;    // Josephus problem
}

int main() {
	// only gravity will pull me down
	
	// Game of Death in a circle

	int t, n, k;
	cin >> t;
	while(t--) {
	    cin >> n >> k;
	    cout << recursion(n, k) << endl;
	}
	return 0;
}