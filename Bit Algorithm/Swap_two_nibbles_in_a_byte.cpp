class Solution{
public:
    int swapNibbles(unsigned char x){
        // only gravity will pull me down

        // Swap two nibbles in a byte
        
        int tmp=x, res=0, i=4;
        while(tmp) {
            res += (tmp&1)*pow(2,i);
            tmp = tmp>>1;
            if(i==7)
                i=0;
            else
                i++;
        }
        return res;
    }
};