/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/
void display(Node *head)
{
  // only gravity will pull me down

  // Print Linked List elements

   if(!head) {
       return;
   }
   while(head->next) {
       cout << head->data << " ";
       head = head->next;
   }
   cout << head->data;
}