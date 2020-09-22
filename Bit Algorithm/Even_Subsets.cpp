//User function Template for C++

/*Function to count subset with even sum
* arr : array input
* N : size of array
*/
int countSumSubsets(int arr[], int N){
    
    // only gravity will pull me down

    // Even Subsets
    
    int res=0;
    for(int i=1; i<pow(2,N); i++) {
        int x=i, s=0, idx=0;
        while(x) {
            if(x&1)
                s += arr[idx];
            x = x>>1;
            idx++;
        }
        if(!(s&1))
            res++;
    }
    return res;
}