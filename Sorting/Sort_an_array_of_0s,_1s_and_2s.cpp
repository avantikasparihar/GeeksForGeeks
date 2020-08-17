void sort012(int a[], int n)
{
    // only gravity will pull me down

    // Sort an array of 0s, 1s and 2s
    
    // sort(a, a+n);
    
    int lo = 0, hi = n-1;
    while(lo < hi) {
        if((a[lo] == 1 || a[lo] == 2) && a[hi] == 0) {
            swap(a[lo], a[hi]);
            lo++;
            hi--;
        }
        if(a[lo] == 2 && a[hi] == 1) {
            swap(a[lo], a[hi]);
            lo++;
            hi--;
        }
        if(a[lo] == 0)
            lo++;
        if(a[hi] == 2)
            hi--;
    }
}