/*
The structure of the node of the stack is
struct StackNode
{
    int data;
    StackNode *next;
    StackNode(int a)
    {
        data = a;
        next = NULL;
    }
};

// And this is structure of MyStack
class MyStack {
private:
StackNode *top;
public :
    void push(int);
    int pop();
    MyStack()
    {
        top = NULL;
    }
};

// only gravity will pull me down

// Implement Stack using Linked List

/* The method push to push element
   into the stack */
void MyStack ::push(int x) {
    StackNode* n = new StackNode(x);
    n->next = top;
    top = n;
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    if(!top)
        return -1;
    int it = top->data;
    top = top->next;
    return it;
}