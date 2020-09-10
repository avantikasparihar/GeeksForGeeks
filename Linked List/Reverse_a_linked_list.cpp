/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

// Should reverse list and return new head.
struct Node* reverseList(struct Node *head)
{
    // only gravity will pull me down

    // Reverse a linked list

    Node *prev = NULL, *next = NULL;
    while(head != NULL) {   // storing prev and next nodes before hand
        next = head->next;
        head->next = prev;
        prev = head;
        
        head = next;
    }
    return prev;
}