/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

// head : reference to head of linked list
int getCount(struct Node* head){

    // only gravity will pull me down

    // Count nodes of linked list
    
    if(!head)
        return 0;
    int cnt = 1;
    while(head->next) {
        cnt++;
        head = head->next;
    }
    return cnt;
}