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
 
void helper(Node *root, int lvl, int &max_lvl) {
    if(!root)
        return;
    if(max_lvl < lvl) {     // keep track of the current level and print the required node
        cout << root->data << " ";
        max_lvl = lvl;
    }
    helper(root->left, lvl+1, max_lvl);
    helper(root->right, lvl+1, max_lvl);
}

// A wrapper over helper()
void leftView(Node *root)
{
    // only gravity will pull me down

    // Left View of Binary Tree

    int max_lvl = 0;
    helper(root, 1, max_lvl);
}