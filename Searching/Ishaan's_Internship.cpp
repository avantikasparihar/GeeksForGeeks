#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Ishaan's Internship
    
    int t, n, k, cnt;
    cin >> t;
    while (t--) {
        cnt = 0;
        cin >> n >> k;
        while(n>=k) {
            n /= k;
            cnt++;
        }
        cout << pow(k, cnt) << endl;
    }
    
	return 0;
}