/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

int height(Node* node) {
    if(!node)
        return 0;
    return 1 + max(height(node->left), height(node->right));
}

/* Computes the diameter of binary tree with given root.  */
int diameter(Node* node) {
    // only gravity will pull me down

    // Diameter of Binary Tree
    
    if(! node)
        return 0;
    int l_height = height(node->left);
    int r_height = height(node->right);
    int l_diameter = diameter(node->left);
    int r_diameter = diameter(node->right);
    
    return max(l_height+r_height+1, max(l_diameter, r_diameter));
}