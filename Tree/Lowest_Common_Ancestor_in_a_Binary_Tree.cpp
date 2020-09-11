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

/* If n1 and n2 are present, return pointer
   to LCA. If both are not present, return 
   NULL. Else if left subtree contains any 
   of them return pointer to left.*/

Node* lca(Node* root ,int n1 ,int n2 )
{
    // only gravity will pull me down 

    // Lowest Common Ancestor in a Binary Tree
    
    if(!root)
        return NULL;
    if(n1 == root->data || n2 == root->data)
        return root;
    
    Node* l = lca(root->left, n1, n2);
    Node* r = lca(root->right, n1, n2);
    
    if(l && r)
        return root;
        
    return l ? l : r;
}