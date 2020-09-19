class Solution
{
public:
    int setBits(int N)
    {
        // only gravity will pull me down

        // Set Bits
        
        int res=0;
        while(N) {
            res += (N&1);
            N = N>>1;
        }
        return res;
    }
};