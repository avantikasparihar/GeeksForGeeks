/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

// func. to merge two sorted Li-list

Node* merge(Node* a, Node* b) {
    if(!a)     
        return b; 
    if(!b)      
        return a; 
    Node* result; 
    if (a->data < b->data) { 
        result = a; 
        result->bottom = merge(a->bottom, b); 
    } 
    else { 
        result = b; 
        result->bottom = merge(a, b->bottom); 
    } 
    return result; 
}

// Flattening a Linked List 

/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
   // Your code here
   if(!root->next)
       return root;
   Node* tmp = root->next;
   while(tmp) {
       root = merge(root, tmp);
       tmp = tmp->next;
   }
   
   return root;
}
