/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// only gravity will pull me down

// Linked List Insertion

// function inserts the data in front of the list
Node *insertAtBegining(Node *head, int newData) {
   Node* n = new Node(newData);
   n->next = head;
   head = n;
   return head;
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
   Node* n = new Node(newData);
   Node* st = head;
   if(!head)
       return n;
   while(head->next) {
       head = head->next;
   }
   head->next = n;
   head->next->next = NULL;
   head = st;
   return head;
}