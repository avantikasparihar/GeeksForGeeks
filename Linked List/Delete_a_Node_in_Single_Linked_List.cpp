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

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    // only gravity will pull me down

    // Delete a Node in Single Linked List
    
    Node *tmp=head;
    if(x == 1) {
        return head->next;
    }
    x -= 2;
    while(x) {
        tmp = tmp->next;
        x--;
    }
    tmp->next = tmp->next->next;
    return head;
}