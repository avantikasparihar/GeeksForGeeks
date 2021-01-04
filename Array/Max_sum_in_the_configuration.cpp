/*You are required to complete this method*/

// Max sum in the configuration

int max_sum(int A[],int n)
{
//Your code here

int sum=A[0];
int max_sum=0;
for(int i=1; i<n; ++i) { 
    sum += A[i];
    max_sum += (i)*A[i];
}
int res = max_sum;
for(int i=1; i<n; ++i) {
    max_sum = max_sum-(sum-A[i-1])+A[i-1]*(n-1);
    res = max(res,max_sum);
}

return res;
}