/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
*/

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
    // only gravity will pull me down

    // Check If Circular Linked List
    
    if(!head)
        return true;
    Node* tmp;
    while(tmp->next) {
        if(tmp->next == head)
            return true;
    }
    return false;
}