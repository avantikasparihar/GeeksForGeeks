class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // only gravity will pull me down

		    // Power Set
		    
		    int n=s.size();
		    vector<string> res(pow(2,n)-1);
		    for(int i=1; i<pow(2,n); i++) {
		        int x = i, idx=0, l=32;
		        while(l--) {
		            if(x&1)
		                res[i-1] += s[idx];
		            idx++;
		            x = x>>1;
		        }
		    }
		    sort(res.begin(), res.end());
		    return res;
		}
};