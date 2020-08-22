// Function to find first smallest positive
// missing number in the array
void swap(int* a, int* b) {     // had to write this extra function because arr cannot be passed as reference
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void segregate(int arr[], int n) {    // non-positive on left and positive on right
    int lo=0, hi=n-1;
    while(lo<hi) {
        if(arr[lo]>0 && arr[hi]<=0) {
            swap(&arr[lo], &arr[hi]);
            lo++;
            hi--;
        }
        if(arr[lo]<=0)
            lo++;
        if(arr[hi]>0)
            hi--;
    }
}

int missingNumber(int arr[], int n) { 
    // only gravity will pull me down

    // Smallest Positive missing number
    
    segregate(arr, n);
    int pos=0;
    while(arr[pos]<=0)
        pos++;
    for(int i=pos; i<n; i++) {
        if (abs(arr[i])+pos-1<n && arr[abs(arr[i])+pos-1]>0) 
            arr[abs(arr[i])+pos-1] *= -1; 
    }
    for(int i=pos; i<n; i++) {
        if(arr[i]>0)
            return i-pos+1;
    }
    return n-pos+1;
} 