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
int helper(Node* root, int &res) {
    if(!root)
        return INT_MAX;
    int l = helper(root->left, res);
    int r = helper(root->right, res);
    res = max(res, max(root->data - l, root->data - r));
    
    return min(root->data, min(l, r));
}
/* Your are required to 
complete this method*/
int maxDiff(Node* root)
{
    // only gravity will pull me down

    // Maximum difference between node and its ancestor
    
    int res = INT_MIN;
    helper(root, res);
    return res;
}