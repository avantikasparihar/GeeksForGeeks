#include <iostream>
using namespace std;

long long recursion(int n) {	// OG motherfuckers B-)
    if (n == 1)
        return 1;
    int x = n * (n+1) / 2;
    long long p = 1;
    for (int i = 0; i < n; i++) {
        p *= x;
        x -= 1;
    }
    return p + recursion(n-1);
}

int main() {
	// only gravity will pull me down

	// Recursive sequence
	
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    cout << recursion(n) << endl;
	}
	return 0;
}