/*

The structure of a BST node is as follows:

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/
int getCountOfNode(Node *root, int l, int h)
{
  // only gravity will pull me down

  // Count BST nodes that lie in a given range
  
  if(!root)
      return 0;
  if(root->data >= l && root->data <= h) 
      return 1 + getCountOfNode(root->left, l, h) + getCountOfNode(root->right, l, h);
  else if(root->data > h)
      return getCountOfNode(root->left, l, h);
  else if(root->data < l)
      return getCountOfNode(root->right, l, h);
}
