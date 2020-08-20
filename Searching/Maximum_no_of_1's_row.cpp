#include<bits/stdc++.h>

using namespace std;

int main()
 {
	// only gravity will pull me down

    // Maximum no of 1's row
    
    int t, row, col;
    cin >> t;
    while (t--) {
        cin >> row >> col;
        int mat[row][col];
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                cin >> mat[i][j];
        int flg=0;
        for(int j=0; j<col; j++) {   // traversing the matrix column-wise and returning the first row with 1
            for(int i=0; i<row; i++)
                if(mat[i][j] == 1) {
                    cout << i << endl;
                    flg = 1;
                    break;
                }
            if(flg)
                break;
        }
    }
    
	return 0;
}