/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
bool check(Node *t1, Node *t2) {
    if(!t1 && !t2)
        return true;
    if(!t1 or !t2)
        return false;
    return t1->data==t2->data && check(t1->left, t2->left) && check(t1->right, t2->right);
}

/*you are required to
complete this function */
bool isSubTree(Node* T, Node* S) {
    // only gravity will pull me down

    // Check if subtree
    // return 1 if S is subtree of T else 0
    if(T)
        return check(T, S) || isSubTree(T->left, S) || isSubTree(T->right, S);
}