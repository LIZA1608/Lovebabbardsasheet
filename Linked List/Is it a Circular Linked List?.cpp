
/*https://www.codingninjas.com/codestudio/problems/is-it-a-circular-linked-list_981265?topList=love-babbar-dsa-sheet-problems*/

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
bool circularLL(Node* head)
{
    Node *temp = head;
    while(temp)
    {
        temp = temp->next;
        if(temp==head)
            return true;
    }
    return false;
}
