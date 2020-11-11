//Structure of binary tree
/*struct Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
// function should print the topView of the binary tree
void topView(struct Node *root)
{
    // only gravity will pull me down

    // Top View of Binary Tree
    
    queue<pair<Node*, int> > q;
    int temp = 0;
    map<int, int> mp;
    q.push(make_pair(root, temp));
    while(!q.empty()) {    // level-order traversal
        auto x = q.front();
        root = x.first;
        temp = x.second;
        if(!mp[temp])
            mp[temp] = root->data;    // record the first node of every vertical order
        q.pop();
        if(root->left)
            q.push(make_pair(root->left, temp-1));
        if(root->right)
            q.push(make_pair(root->right, temp+1));
    }

    for(auto m: mp) {
        cout << m.second << " ";
    }
}