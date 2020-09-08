/*structure of a node of the linked list is as
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// Function should return 0 if length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
    //only gravity will pull me down

    // Linked List Length Even or Odd

    if(!head)
        return 0;
    int cnt = 1;
    while(head->next) {
        cnt++;
        head = head->next;
    }
    return cnt%2 ? 1 : 0;
}