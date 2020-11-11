/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
Node* lca(Node* root, int a, int b) {   // least common ancestor
    if(!root)
        return NULL;
    if(root->data==a || root->data==b)
        return root;
    Node *lt = lca(root->left,a,b);
    Node *rt = lca(root->right,a,b);
    
    if(rt && lt)
        return root;
    else if(!rt && !lt)
        return NULL;
    else if(lt)
        return lt;
    return rt;
}
int distance(Node* s, int n, int dist) {
    if(!s) 
        return 0;
    if(s->data == n)
        return dist;
    return max(distance(s->left, n, dist+1), distance(s->right, n, dist+1));
}
/* Should return minimum distance between a and b
   in a tree with given root*/
int findDist(Node* root, int a, int b) {
    // only gravity will pull me down

    // Min distance between two given nodes of a Binary Tree

    Node *source = lca(root, a, b);
    return distance(source, a, 0) + distance(source, b, 0);
}