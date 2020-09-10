/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

/* Should return data of n'th node from the end of linked list.
*  head: head of the linked list
*  n: nth node from end to find
*/
int getNthFromLast(Node *head, int n)
{
       // only gravity will pull me down

       // Nth node from end of linked list
  
       Node *tmp = head;
       int x=n-1;
       while(x && tmp->next) {
           tmp = tmp->next;
           x--;
       }
       if(x != 0)
           return -1;
       while(tmp->next) {
           tmp = tmp->next;
           head = head->next;
       }
       return head->data;
}