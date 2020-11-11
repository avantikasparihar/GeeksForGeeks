/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

void left_traverse(Node *root, vector<int> &res) {
    if(!root)
        return;
    if(root->left || root->right)
        res.push_back(root->data);
    if(root->left)
        left_traverse(root->left, res);
    else if(root->right)
        left_traverse(root->right, res);
    else
        return;
}
void leaf_traverse(Node *root, vector<int> &res) {
    if(!root)
        return;
    leaf_traverse(root->left, res);
    if(!root->left && !root->right)
        res.push_back(root->data);
    leaf_traverse(root->right, res);
}
void right_traverse(Node *root, vector<int> &temp) {
    if(!root)
        return;
    if(root->left || root->right)
        temp.push_back(root->data);
    if(root->right)
        right_traverse(root->right, temp);
    else if(root->left)
        right_traverse(root->left, temp);
    else
        return;
}

vector <int> printBoundary(Node *root)
{
     // only gravity will pull me down

     // Boundary Traversal of binary tree

     vector<int> res;
     res.push_back(root->data);
     left_traverse(root->left, res);
     leaf_traverse(root, res);
     vector<int> temp;
     right_traverse(root->right, temp);
     reverse(temp.begin(),temp.end());
     res.insert(res.end(),temp.begin(),temp.end());
     
     return res;
}