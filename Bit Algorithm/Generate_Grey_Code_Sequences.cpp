/*Returns an array of all n-bit gray codes sequence.
You are required to complete below method. */

vector <string> generateCode(int N)
{
    // only gravity will pull me down

    // Generate Grey Code Sequences
    
    vector<string> res;
    res.push_back("0");
    res.push_back("1");
    if(N==1)
        return res;
    while(N--) {
        vector<string> tmp;
        for(int i=0; i<res.size(); i++) {
            tmp.push_back("0"+res[i]);
        }
        for(int i=res.size()-1; i>=0; i--) {
            tmp.push_back("1"+res[i]);
        }
        res = tmp;
        if(N==1)
            return res;
    }
}