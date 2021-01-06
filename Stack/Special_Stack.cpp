/*Complete the function(s) below*/

// Special Stack

void push(stack<int> s,int a)
{
     //add code here.
    if(s.empty())
    {
        s.push(a);
        s.push(a);
        return;
    }
    if(a < s.top()) 
    {
        s.push(a);
        s.push(a);
        return;
    }
    int min_value = s.top();
    s.push(a);
    s.push(min_value);
    return;
}

bool isFull(stack<int> s,int n)
{
     //add code here.
    if(s.size() >= 2*n) 
        return 1;
    return 0;
}

bool isEmpty(stack<int> s)
{
    //add code here.
    if(s.size() == 0) 
        return 1;
    return 0;
}

int pop(stack<int> s)
{
    //add code here.
    if(s.size() == 0) 
        return -1;
    s.pop();
    int ele = s.top();
    s.pop();
    return ele;
}

int getMin(stack<int> s)
{
   //add code here.
   return s.top();
}