#include <iostream>
using namespace std;

int recursion(long long n) {    // this doesn't work
    if (n == 1)
        return 1;
      
    long long x = n;  
    while (!(x%2)) {
        x /= 2;    
    } 
    if (x == 1)
        return n;
        
    recursion(n-1);
}

int main() {
	// only gravity will pull me down
	
	int t;
	long long n, p;
	cin >> t;
	while(t--) {
	    cin >> n;
	    p = 1;
	    while(p*2 <= n) {    // finding the power of 2 closest to n
	        p *= 2;
	    }
	    cout << p << endl;
	}
	return 0;
}