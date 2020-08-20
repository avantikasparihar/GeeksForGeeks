// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)
{
// only gravity will pull me down

// Counting elements in two arrays

vector<int> res;
sort(arr2, arr2+n);    // sort the second array in O(n*logn)
for(int i=0; i<m; i++) {
    int lo=0, hi=n-1, mid;
    while(lo<=hi) {    // binary search in arr2 for each value in arr1
        mid = (lo+hi)/2;
        if(arr2[mid] <= arr1[i])    
            lo=mid+1;
        else
            hi=mid-1;
    }
    res.push_back(lo);
}
return res;
}