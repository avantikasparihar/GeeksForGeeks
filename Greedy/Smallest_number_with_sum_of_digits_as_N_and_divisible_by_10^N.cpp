#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Smallest number with sum of digits as N and divisible by 10^N
    
    int t, n, x, f;
    cin >> t;
    while (t--) {
        cin >> n;
        x = n/9;
        f = n%9;
        if(f)
            cout << f;
        for(int i=0; i<x; i++)
            cout << 9;
        for(int i=0; i<n; i++)
            cout << 0;
        cout << endl;
    }
    
	return 0;
}