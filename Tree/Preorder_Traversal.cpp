/*
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

void preorderT(struct Node* root, vector<int> &res) {
    if(!root)
        return;
    res.push_back(root->data);
    preorderT(root->left, res);
    preorderT(root->right, res);
}

vector <int> preorder(Node* root)
{
  // only gravity will pull me down

  // Preorder Traversal

  vector<int> res;
  preorderT(root, res);
  return res;
}