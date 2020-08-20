// Function to find the transition point

int transitionPoint(int arr[], int n) {
    // only gravity will pull me down

    // Find Transition Point

    if(arr[0]==1)   // border case
        return 0;
    int lo=0, hi=n-1, mid;
    while(lo<=hi) {
        mid=(lo+hi)/2;
        if(arr[mid]==0 && arr[mid+1]==1)
            return mid+1;
        else if(arr[mid]==0)
            lo=mid+1;
        else
            hi=mid-1;
    }
    return -1;
}