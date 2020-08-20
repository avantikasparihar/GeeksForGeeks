/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
int peakElement(int arr[], int n)
{
   // only gravity will pull me down

   // Peak element
   
   int lo=0, hi=n-1, mid;
   while(lo<=hi) {
       mid = (lo+hi)/2;  
       if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
            return mid;
       else if(arr[mid-1]>arr[mid])
            hi = mid-1;
       else
            lo = mid+1;
   }
   return n-1;
}