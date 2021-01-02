/*You are required to complete below function */

// Multiply two strings
 
string multiplyStrings(string s1, string s2) {
   // only gravity will pull me down
   
   int sign = 1;
    
   if(s1[0] == '-') {
       sign *= (-1);
       s1.erase(s1.begin());
   }
   
   if(s2[0] == '-') {
       sign *= (-1);
       s2.erase(s2.begin());
   }
   
    int n1 = s1.size(), n2 = s2.size();
    if (n1 == 0 || n2 == 0)
       return "0";
    vector<int> result(n1 + n2, 0);
 
    int i_n1 = 0; 
    int i_n2 = 0; 
 
    for (int i=n1-1; i>=0; i--) {
        int carry = 0;
        int n1 = s1[i] - '0';
        i_n2 = 0; 
        for (int j=n2-1; j>=0; j--) {
            int n2 = s2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }
 
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
       i--;
 
    if (i == -1)
       return "0";
 
    string s = "";
    while (i >= 0)
        s += std::to_string(result[i--]);
        
    if (sign == -1)
        s.insert(s.begin(), '-');
 
    return s;
}
