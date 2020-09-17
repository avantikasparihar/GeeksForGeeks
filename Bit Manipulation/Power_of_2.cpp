#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Power of 2
    
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        if(!n)
            cout << "NO\n";
        else if(n&(n-1))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    
	return 0;
}