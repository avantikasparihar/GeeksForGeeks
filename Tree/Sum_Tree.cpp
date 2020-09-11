/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
int sumTree(Node* node) {    // sum of each subtree
    if(!node)
        return 0;
    return node->data + sumTree(node->left) + sumTree(node->right);
}
// Should return true if tree is Sum Tree, else false
bool isSumTree(Node* root)
{
     // only gravity will pull me down

     // Sum Tree

     int s1 = sumTree(root->left);
     int s2 = sumTree(root->right);
     
     return (s1+s2 != root->data) ? false : true;
     
     return  isSumTree(root->left) && isSumTree(root->right);
}