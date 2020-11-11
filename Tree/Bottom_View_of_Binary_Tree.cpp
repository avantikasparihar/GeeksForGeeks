/* Tree node class

struct Node
{
    int data; //data of the node
    Node *left, *right; //left and right references

    // Constructor of tree node
    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
}; */

// Method that returns the bottom view.
vector <int> bottomView(Node *root)
{
   // only gravity will pull me down

   // Bottom View of Binary Tree
   
    queue<pair<Node*, int> > q;
    int temp = 0;
    map<int, int> mp;
    q.push(make_pair(root, temp));
    while(!q.empty()) {    // level-order traversal
        auto x = q.front();
        root = x.first;
        temp = x.second;
        mp[temp] = root->data;    // record the last node of every vertical order
        q.pop();
        if(root->left)
            q.push(make_pair(root->left, temp-1));
        if(root->right)
            q.push(make_pair(root->right, temp+1));
    }
    vector<int> res;
    for(auto m: mp) {
        res.push_back(m.second);
    }
    return res;
}
