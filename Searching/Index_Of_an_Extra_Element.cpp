/*Complete the function below*/
int findExtra(int a[], int b[], int n) {
    // only gravity will pull me down

    // Index Of an Extra Element
    
    int lo=0, hi=n-2, mid;
    while(lo<=hi) {
        mid=(lo+hi)/2;
        if(b[mid]==a[mid])
            lo=mid+1;
        else
            hi=mid-1;
    }
    return lo;
}