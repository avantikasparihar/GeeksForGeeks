#include <bits/stdc++.h>

using namespace std;

void recursion(long long n, long long N, int flg) {    // Prettty simple ^.^
    cout << n << " ";
    
    if (n == N) {
        return;
    }
    
    if (n <= 0 || flg) {
        flg = 1;
        recursion(n+5, N, flg);
        return;
    }
    
    recursion(n-5, N, flg);
}

int main() {
	// only gravity will pull me down

	// Print Pattern
	
	int t;
	long long n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    cout << n << " ";
	    recursion(n-5, n, 0);
	    cout << endl;
	}
	return 0;
}