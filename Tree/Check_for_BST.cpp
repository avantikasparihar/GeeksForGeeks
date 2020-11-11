/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

bool helper(Node* root, int ll, int rl) {
    if(!root)
        return true;
    return ((ll < root->data && rl > root->data) && helper(root->left, ll, root->data) && helper(root->right, root->data, rl));
}

// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    // only gravity will pull me down

    // Check for BST

    return helper(root, INT_MIN, INT_MAX);
}