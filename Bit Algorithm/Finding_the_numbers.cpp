class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        // only gravity will pull me down

        // Finding the numbers

        vector<int> res;
        int xr =nums[0];
        res.push_back(0);
        res.push_back(0);
        for(int i=1; i<nums.size(); i++) {  // xor of all numbers(xor of two distinct no.s)
            xr = xr^nums[i]; 
        }
        int cnt=0, x=0;
        while(xr) {   // x has rightmost set bit pf xr
            if(xr&1) {
                x = pow(2, cnt);
                break;
            }
            cnt++;
            xr = xr>>1;
        }
        for(int i=0; i<nums.size(); i++) {   // xor of two diff sets in nums
            if(nums[i] & x)
                res[0] = res[0]^nums[i];
            else
                res[1] = res[1]^nums[i];
        }
        sort(res.begin(), res.end());
        return res;
    }
};