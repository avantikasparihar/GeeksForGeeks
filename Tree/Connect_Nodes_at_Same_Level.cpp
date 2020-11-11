/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */

// Should set the nextRight for all nodes
void connect(Node *root)
{
    // only gravity will pull me down

    // Connect Nodes at Same Level
    
    queue<pair<Node*, int> > q;
    int lvl = 1;
    map<int, int> mp;
    q.push(make_pair(root, lvl));
    pair<Node*, int> prev = make_pair(root, 1);
    
    while(!q.empty()) {    // level-order traversal
        auto x = q.front();
        root = x.first;
        lvl = x.second;
        if(lvl == prev.second)
            prev.first->nextRight = root;
        q.pop();
        if(q.empty())
            root->nextRight = NULL;
        if(root->left)
            q.push(make_pair(root->left, lvl+1));
        if(root->right)
            q.push(make_pair(root->right, lvl+1));
        prev = x;
    }
    
}