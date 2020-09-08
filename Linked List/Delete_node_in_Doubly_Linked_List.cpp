/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

// Function to delete the node at position x
Node* deleteNode(Node **head_ref, int x)
{
  // only gravity will pull me down

  // Delete node in Doubly Linked List
  
  Node *del = *head_ref;
  x--;
  while(x--) {
      del = del->next;
  }
    if (*head_ref == NULL || del == NULL)  
        return NULL;  
    if (*head_ref == del)  
        *head_ref = del->next; 
    if (del->next != NULL)  
        del->next->prev = del->prev; 
    if (del->prev != NULL)  
        del->prev->next = del->next;  
    free(del);  
    return *head_ref;
}