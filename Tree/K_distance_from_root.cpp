/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

void helper(struct Node *root, vector<int> &res, int k, int lvl) {
    if(!root)
        return;
    if(lvl == k)
        res.push_back(root->data);
    helper(root->left, res, k, lvl+1);
    helper(root->right, res, k, lvl+1);
}

// function should print the nodes at k distance from root
vector<int> Kdistance(struct Node *root, int k)
{
  // only gravity will pull me down

  // K distance from root
  
  vector<int> res;
  helper(root, res, k, 0);
  return res;
}