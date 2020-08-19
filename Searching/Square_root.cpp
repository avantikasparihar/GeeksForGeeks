// Function to find square root
// x: element to find square root

long long int floorSqrt(long long int x) 
{
    // only gravity will pull me down

    // Square root

    long long lo=1, hi=x, mid;
    while(lo<=hi) {
        mid = (lo+hi)/2;
        if(mid*mid == x)
            return mid;
        else if(mid*mid < x)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return lo-1;
}