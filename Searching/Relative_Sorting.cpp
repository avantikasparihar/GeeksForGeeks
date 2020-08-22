#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Relative Sorting
    
    int t;
    long long n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int a1[n], a2[m];
        map<int, int> freq_a1;
        for(auto &x: a1) {
            cin >> x;
            freq_a1[x]++;
        }
        for(auto &x: a2) {
            cin >> x;
            while(freq_a1[x]) {
                cout << x << " ";
                freq_a1[x]--;
            }
        }
        sort(a1, a1+n);
        for(int i=0; i<n; i++) {
            if(freq_a1[a1[i]])
                cout << a1[i] << " ";
        }
        cout << endl;
    }
    
	return 0;
}