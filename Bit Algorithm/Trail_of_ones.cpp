class Solution{   
public:
    int numberOfConsecutiveOnes(int N){
        // only gravity will pull me down

        // Trail of ones

        int a[N], b[N];   // a and b are no of arrays ending in 0 and 1 resp. 
        a[0] = b[0] = 1; 
        for (int i = 1; i < N; i++) {   // calculating no of arrays with no consecutive 1s
            a[i] = a[i-1] + b[i-1];   // 0 can be added to both type of arrays
            b[i] = a[i-1];   // 1 can be added to the arrays ending in 0 only
        } 
        int cnt = a[N-1] + b[N-1]; 
                
        return pow(2,N) - cnt;
    }
};