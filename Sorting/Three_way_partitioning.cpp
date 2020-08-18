/*The function should return the modified array
as specified in the problem statement */

vector<int> threeWayPartition(vector<int> A, int a, int b)
{
    // only gravity will pull me down

    // Three way partitioning
     
    int lo = 0, hi = A.size()-1, i = 0; 

    while(i <= hi) {
        if (A[i] < a) 
            swap(A[i++], A[lo++]); 
  
        else if (A[i] > b) 
            swap(A[i], A[hi--]); 
  
        else
            i++; 
    } 
     return A;
}