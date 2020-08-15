#include <iostream>
using namespace std;

int fact[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};	// pre-computed

int factorial(int n) {
    if (n < 10)
        return fact[n];
    
    if (((n/10)%10)%2 == 0)    // standard formula
        return (6*factorial(n/5)*fact[n%10]) % 10;
    else
        return (4*factorial(n/5)*fact[n%10]) % 10;
}

int main() {
	// only gravity will pull me down

	// Last non-zero digit in factorial
	
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    cout << factorial(n) << endl;
	}
	return 0;
}