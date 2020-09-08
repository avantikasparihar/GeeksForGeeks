/*Structure of the node of the linled list is as

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};
*/
// your task is to complete this function 
// function should return sum of last n nodes
int sumOfLastN_Nodes(struct Node* head, int n)
{
    // only gravity will pull me down

    // Find the Sum of Last N nodes of the Linked List
      
    Node* tmp = head;
    for(int i=1; i<n; i++)
        tmp = tmp->next;
    while(tmp->next) {
        head = head->next;
        tmp = tmp->next;
    }
    int ans = 0;
    while(head->next) {
        ans += head->data;
        head = head->next;
    }
    ans += head->data;
    return ans;
}