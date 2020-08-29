#include<bits/stdc++.h>

using namespace std;

void mincoins(int n) {
    if(n==0) 
        return;
    int d=log10(n);
    if(d==3 || d==2) {
        while((n-500)>=0) {
            cout << 500 << " ";
            n-=500;
        }
        while((n-200)>=0) {
            cout << 200 << " ";
            n-=200;
        }
        while((n-100)>=0) {
            cout << 100 << " ";
            n-=100;
        }
        mincoins(n);
    }
    else if(d==1) {
        while((n-50)>=0) {
            cout << 50 << " ";
            n-=50;
        }
        while((n-20)>=0) {
            cout << 20 << " ";
            n-=20;
        }
        while((n-10)>=0) {
            cout << 10 << " ";
            n-=10;
        }
        mincoins(n);
    }
    else {
        while((n-5)>=0) {
            cout << 5 << " ";
            n-=5;
        }
        while((n-2)>=0) {
            cout << 2 << " ";
            n-=2;
        }
        while((n-1)>=0) {
            cout << 1 << " ";
            n-=1;
        }
        mincoins(n);
    }
}

int main()
 {
	// only gravity will pull me down

    // Minimum number of Coins
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if(n>=2000) {
            while((n-2000)>=0) {
                cout << 2000 << " ";
                n-=2000;
            }
        }
        mincoins(n);
        cout << endl;
    }
    
	return 0;
}