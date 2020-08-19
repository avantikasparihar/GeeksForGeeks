/*you are required to complete this method*/

int countZeros(int A[MAX][MAX],int N)
{
// only gravity will pull me down

// Count zeros in a sorted matrix

int lo=0, hi= N-1, mid, cnt=0;
for(int i=0; i<N; i++) {
    while(lo<=hi) {    // Binary Search
        mid = (lo+hi)/2;
        if(A[i][mid] == 0)
            lo = mid+1;
        if(A[i][mid] == 1)
            hi = mid-1;
    }
    cnt += lo;
    lo=0, hi=N-1;
}
return cnt;
}