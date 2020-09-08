/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};
*/
// Complete this function
void deleteAlt(struct Node *head){

    // only gravity will pull me down

    // Delete Alternate Nodes

    while(head->next && head->next->next) {
        head->next = head->next->next;
        head = head->next;
    }
    head->next = NULL;
}
