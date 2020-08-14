/*Complete the function below
Node is as follows:
struct Node{
    int data;
    Node *left,*right;
};
*/
void recursion(map<int, int> &mp, Node* root, int lvl) {
    if (root == NULL)   // base case which is almost the same in every tree question
        return;
    
    mp[lvl] += root->data;   // updating the sum of the current level
    
    recursion(mp, root->left, lvl+1);   // the value of left node is added to the next level (pretty much the whole idea of the question)
    recursion(mp, root->right, lvl);    // the value of the right node is added to the current level
}

vector <int> diagonalSum(Node* root) {
    // only gravity will pull me down

    map<int, int> mp;   // for inserting the sums to respective levels
    vector<int> res;
    
    recursion(mp, root, 0);
    
    for (auto m: mp) {
        res.push_back(m.second);
    }
    
    return res;
}