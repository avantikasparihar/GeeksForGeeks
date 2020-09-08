/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// function should insert node at the middle
// of the linked list
Node* insertInMiddle(Node* head, int x)
{
	// only gravity will pull me down

	// Insert in Middle of Linked List
	
	Node* tmp=head;
	Node* st=head;
	Node* n = new Node(x);
	while(tmp->next && tmp->next->next) {
	    tmp = tmp->next->next;
	    head = head->next;
	}
	if(head->next)
	    n->next = head->next;
	else
	    n->next = NULL;
	head->next=n;
	head = st;
	return head;
}