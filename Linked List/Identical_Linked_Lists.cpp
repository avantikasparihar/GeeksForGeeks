/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// This function should return true if both 
// linked lists are identical else return false.
bool areIdentical(struct Node *head1, struct Node *head2)
{
    // only gravity will pull me down

    // Identical Linked Lists
    
    while(head1->next && head2->next) {
        if(head1->data != head2->data)
            return false;
        head1 = head1->next;
        head2 = head2->next;
    }
    if(head1->data != head2->data)
        return false;
    if(head1->next || head2->next)
        return false;
    return true;
}