/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

// Remove loop in Linked List

void removeLoop(Node* head)
{
    // code here
    // just remove the loop without losing any nodes
    Node* tmp = head;
    while(tmp) {
        if(tmp->next == NULL)
            break;
        if(tmp->next->data < 0) 
            tmp->next = NULL;
        else 
            tmp->data = tmp->data*-1;
        tmp = tmp->next;
    }
    while(head) {
        if(head->data < 0)
            head->data = head->data*-1;
        head = head->next;
    }
}