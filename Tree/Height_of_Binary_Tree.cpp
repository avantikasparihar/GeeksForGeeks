/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

// return the Height of the given Binary Tree
int height(Node* root)
{
    // only gravity will pull me down

    // Height of Binary Tree
    
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return 1;
    return max(1+height(root->left), 1+height(root->right));
}