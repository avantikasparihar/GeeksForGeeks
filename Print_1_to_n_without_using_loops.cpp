#include <bits/stdc++.h>

using namespace std;

void print(int n) {
    if (n == 0)
        return;
    print(n-1);
    cout << n << " ";
}

int main() {
	// only gravity will pull me down

	// Print 1 to n without using loops
	
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    print(n);
	    cout << endl;
	}
	
	return 0;
}