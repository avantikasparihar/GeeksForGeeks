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

// This function should rotate list counter-clockwise
// by k and return new head (if changed)

Node* rotate(Node* head, int k)
{
    // only gravity will pull me down

    // Rotate a Linked List
    
    Node *tmp1 = head, *tmp2 = head;
    k--;
    while(k) {
        tmp2 = tmp2->next;
        k--;
    }
    while(tmp1->next) {
        tmp1 = tmp1->next;
    }
    tmp1->next = head;
    head = tmp2->next;
    tmp2->next = NULL;
    
    return head;
}