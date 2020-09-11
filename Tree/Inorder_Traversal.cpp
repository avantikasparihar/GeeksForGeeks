/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */


// Return a vector containing the inorder traversal of the tree
void inorderT(struct Node* root, vector<int> &res) {
    if(!root)
        return;
    inorderT(root->left, res);
    res.push_back(root->data);
    inorderT(root->right, res);
}

vector<int> inOrder(Node* root)
{
  // only gravity will pull me down

  // Inorder Traversal 
  
  vector<int> res;
  inorderT(root, res);
  return res;
}