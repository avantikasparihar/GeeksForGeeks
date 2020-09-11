/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

void helper(Node* root, vector<int> &res) {
    if(!root)
        return;
    if(!root->left && root->right) {
        res.push_back(root->right->data);
    }
    helper(root->right, res);
    if(root->left && !root->right) {
        res.push_back(root->left->data);
    }
    helper(root->left, res);
}

vector<int> noSibling(Node* node)
{
    // only gravity will pull me down

    // Print all nodes that don't have sibling
    
    vector<int> res;
    helper(node, res);
    if(!res.size())
        res.push_back(-1);
    sort(res.begin(), res.end());
    return res;
}