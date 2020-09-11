/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

bool helper(Node* node, int sum, int s) {
    if(!node->left && !node->right) {
        if(s == sum)
            return true;
        return false;
    }
    bool l, r;
    if(node->left)
        l = helper(node->left, sum, s + node->left->data);
    if(node->right)
        r = helper(node->right, sum, s + node->right->data);
    return (l || r);
}
/*you are required to
complete this function */
bool hasPathSum(Node *node, int sum) {
    // only gravity will pull me down

    // Root to leaf path sum
    
    return helper(node, sum, node->data);
}