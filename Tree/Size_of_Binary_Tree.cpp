/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left;
     Node* right;
}; */

/* Computes the number of nodes in a tree. */
int getSize(Node* node)
{
    // only gravity will pull me down

    // Size of Binary Tree
    
    if(!node)
        return 0;
    return 1 + getSize(node->left) + getSize(node->right);
}