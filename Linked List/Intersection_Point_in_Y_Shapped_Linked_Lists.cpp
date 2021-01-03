/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// Intersection Point in Y Shapped Linked Lists

/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    while(head1) {
        head1->data = (head1->data+1)*-1;
        head1 = head1->next;
    }
    while(head2) {
        if(head2->data < 0)
            return (head2->data)*-1-1;
        head2 = head2->next;
    }
    return -1;
}