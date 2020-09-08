/*Struture of the node of the linked list is as:

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
int modularNode(Node* head, int k)
{
	// only gravity will me down

	// Modular Node
	
	Node* tmp=head;
	Node* st=head;
	while(head->next) {
	    int i=k-1;
	    while(i && tmp->next) {
	        tmp = tmp->next;
	        i--;
	    }
	    if(i)
	        break;
	    head = tmp;
	    if(tmp->next)
	        tmp = tmp->next;
	}
	if(head == st)
	    return -1;
	return head->data;
}