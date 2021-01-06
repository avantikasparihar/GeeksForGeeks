// User function template for C++

// Delete middle element of a stack

class Solution {
public:
    void helper(stack<int>& s,int sizeOfStack,int current)
    {
        if(current == sizeOfStack/2){
            s.pop();
            return;
        }
        int temp = s.top();
        s.pop();
        helper(s, sizeOfStack, current+1);
        s.push(temp);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here 
        helper(s, sizeOfStack, 0);
    }
};