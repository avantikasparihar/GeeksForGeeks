/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
int fractional_node(struct Node *head, int k)
{
    // only gravity will pull me down

    // Find n/k th node in Linked list
    
    Node* tmp = head;
    while(tmp) {
        int i=k-1;
        while(i && tmp->next) {
            tmp = tmp->next;
            i--;
        }
        if(!tmp->next)
            break;
        head = head->next;
        tmp = tmp->next;
    }
    return head->data;
}