/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

// Delete nodes having greater value on right

Node *compute(Node *head)
{
    // your code goes here
    Node* tmp = head;
    int f = 1;
    while(f) {
        f = 0;
        while(tmp && tmp->next) {
            if(tmp->data < tmp->next->data) {
                tmp->data = tmp->next->data;
                tmp->next = tmp->next->next;
                f = 1;
            }
            else
                tmp = tmp->next;
        }
        tmp = head;
    }
    
    return head;
}
