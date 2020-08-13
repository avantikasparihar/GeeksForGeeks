#include <iostream>
using namespace std;

int recursion(int n) {    // easy peasy, lemon squeezy :)
    if (n/10 < 1) {
        if (n == 1 || n == 7)
            return 1;
        else
            return 0;
    }
    int x = 0;
    while(n) {
        x += (n%10)*(n%10);
        n /= 10;
    }
    return recursion(x);
}

int main() {
	// only gravity will pull me down

	// Next Happy Number
	
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    while(1) {
	        n++;
	        if (recursion(n)) {
	            cout << n << endl;
	            break;
	        }
	    }
	}
	return 0;
}