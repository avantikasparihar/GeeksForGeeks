/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

// Sort a stack

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
    stack<int> stk;
    while(!s.empty()) {
        int x = s.top();
        s.pop();
        while(!stk.empty() && stk.top()<x) {
            s.push(stk.top());
            stk.pop();
        }
        stk.push(x);
    }
    
    while(!stk.empty()) {
        s.push(stk.top());
        stk.pop();
    }
}