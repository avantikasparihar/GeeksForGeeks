//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<char> st;
    for(int i=0; i<len; i++) {
        st.push(S[i]);
    }
    int idx=0;
    while(!st.empty()) {
        char ch = st.top();
        S[idx] = ch;
        idx++;
        st.pop();
    }
    
    return S;
}