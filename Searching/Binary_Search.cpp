/*You need to complete this function */
int bin_search(int A[], int left, int right, int k)
{
    while (left <= right) { 
        int m = left + (right - left) / 2; 
        if (A[m] == k) 
            return m; 
        if (A[m] < k) 
            left = m + 1; 
        else
            right = m - 1; 
    } 
    return -1; 
}