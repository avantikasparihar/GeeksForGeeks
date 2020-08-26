#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    double r1 = (double)p1.first / p1.second; 
    double r2 = (double)p2.first / p2.second; 
    return r1 > r2;
}

int main()
 {
	// only gravity will pull me down

    // Fractional Knapsack
    
    int t, n, w;
    cin >> t;
    while (t--) {
        double res = 0.0;
        cin >> n >> w;
        vector<int> value(n), weight(n);
        vector<pair<int, int>> vw(n);
        for(int i=0; i<n; i++) {
            cin >> value[i] >> weight[i];
            vw[i].first = value[i];
            vw[i].second = weight[i];
        }
        sort(vw.begin(), vw.end(), cmp);
        for(int i=0; i<n; i++) {
            if(vw[i].second<=w) {
                res += vw[i].first;
                w -= vw[i].second;
            }
            else if(w>0) {
                res += vw[i].first*((double) w/vw[i].second);   // use double when taking ratios for precision
                break;
            }
        }
        cout << fixed << setprecision(2) << res << endl;
    }
    
	return 0;
}