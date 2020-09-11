/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void postorderT(struct Node* root, vector<int> &res) {
    if(!root)
        return;
    postorderT(root->left, res);
    postorderT(root->right, res);
    res.push_back(root->data);
}

vector <int> postOrder(Node* root)
{
  // only gravity will pull me down

  // Postorder Traversal
  
  vector<int> res;
  postorderT(root, res);
  return res;
}