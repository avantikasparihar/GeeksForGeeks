/* A binary tree Node

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

//You are required to complete this method
vector<int> levelOrder(Node* node)  // breadth first traversal
{
    // only gravity will pull me down

    // Level order traversal

    vector<int> res;
    queue<Node*> q;
    q.push(node);
    while(!q.empty()) {
        node = q.front();    // obtaining the front-most el in queue and popping it
        res.push_back(node->data);
        q.pop();
        if(node->left)    // pre-storing the next level nodes in the queue
            q.push(node->left);
        if(node->right)
            q.push(node->right);
    }
    return res;
}