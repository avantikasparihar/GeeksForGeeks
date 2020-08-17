/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
bool findTriplets(int arr[], int n)
{ 
    // only gravity will pull me down

    // Find triplets with zero sum
    
    sort(arr, arr+n);
    int lo, hi, x;
    
    for(int i=0; i < n-1; i++) {
        lo = i + 1; 
        hi = n - 1; 
        x = arr[i]; 
        while (lo < hi) {   // two pointers approach for O(n^2) time and O(1) space
            if (x + arr[lo] + arr[hi] == 0) 
                return true; 
            else if (x + arr[lo] + arr[hi] < 0) 
                lo++; 
            else
                hi--; 
        } 
    }   // can use hashing for O(n^2) time and O(n) space
    return false;
}