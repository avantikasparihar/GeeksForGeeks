/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/

bool detectLoop(Node* head)
{
    // only gravity will pull me down

    // Detect Loop in linked list

    Node* tmp=head;
    if(tmp == NULL)
        return false;

    while(tmp->next) {
        if(tmp->data == -1)     // flagging all the visited nodes
            return true;
        tmp->data = -1;
        tmp = tmp->next;
    }
    if(tmp->data == -1)
        return true;
    return false;
}