/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */


// Convert a given tree to a tree where every node contains sum of values of
// nodes in left and right subtrees in the original tree
int sumT(Node* node) {
    if(!node)
        return 0;
    return node->data + sumT(node->left) + sumT(node->right);
}
void toSumTree(Node *node)
{
    // only gravity will pull me down

    // Transform to Sum Tree
    
    if(!node)
        return;
    node->data = sumT(node->left) + sumT(node->right);
    toSumTree(node->left);
    toSumTree(node->right);
}