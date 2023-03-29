/*https://www.codingninjas.com/codestudio/problems/detect-the-cycle_1822910?topList=love-babbar-dsa-sheet-problems*/

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool detectCycle(Node *head){
	//	Write your code here.
	Node*slow=head;
	Node*fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			return true;
		}
	}
	return false;
}
