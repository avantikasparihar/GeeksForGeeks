/*Structure of the node of the binary tree
struct Node
{
	int key;
	Node* left, *right;
};
*/
// Function should return the sum of all the elements
// of the binary tree
long int sumBT(Node* root)
{
    // only gravity will pull me down

    // Sum of Binary Tree
    
    if(!root)
        return 0;
    return root->key + sumBT(root->left) + sumBT(root->right);
}