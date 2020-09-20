class Solution {
  public:
    long long reversedBits(long long X) {
        // only gravity will pull me down

        // Reverse Bits
        
        int n=31;
        long long res=0;
        while(n>=0) {
            res+=(X&1)*pow(2,n);
            X = X>>1;
            n--;
        }
        return res;
    }
};