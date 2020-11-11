/* A binary tree node has data, pointer to left child
   and a pointer to right child 
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


// root: root node of the tree
vector<int> verticalOrder(Node *root)
{
    //only gravity will pull me down

    // Vertical Traversal of Binary Tree

    vector<int> res;
    map<int, vector<int> > mp;
    queue<pair<Node*, int> > q;
    int temp = 0;
    q.push(make_pair(root, temp));
    
    while(!q.empty()) {     // level-order traversal
        auto x = q.front();
        root = x.first;    // obtaining the front-most el in queue and popping it
        temp = x.second;
        mp[temp].push_back(root->data);
        q.pop();
        if(root->left)    // pre-storing the next level nodes in the queue
            q.push(make_pair(root->left, temp-1));
        if(root->right)
            q.push(make_pair(root->right, temp+1));
    }
    
    for(auto m: mp) {
        for(auto x: m.second)
            res.push_back(x);
    }
    return res;
}