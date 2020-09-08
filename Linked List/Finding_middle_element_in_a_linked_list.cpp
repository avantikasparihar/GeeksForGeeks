/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // only gravity will pull me down

   // Finding middle element in a linked list 

   if(!head)
       return -1;
   Node* tmp = head;
   while(tmp->next && tmp->next->next) {    // two pointers, single traversal
       head = head->next;
       tmp = tmp->next->next;
   }
   if(tmp->next)
       return head->next->data;
   return head->data;
}