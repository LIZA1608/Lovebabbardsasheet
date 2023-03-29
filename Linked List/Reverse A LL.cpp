/*https://www.codingninjas.com/codestudio/problems/reverse-a-ll_2271431?topList=love-babbar-dsa-sheet-problems*/

/********************************************************

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

********************************************************/
Node* reverseListNode(Node* head) {
    if (!head || !head->next) {
        return head;
    }

    Node* new_head = reverseListNode(head->next);
    head->next->next = head;
    head->next = NULL;

    return new_head;
}
Node *reverseLL(Node *head, int low, int high) {
	// Write your code here.
if (!head || low == high) {
        return head;
    }

    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prev = dummy;

    for (int i = 0; i < low - 1; i++) {
        prev = prev->next;
    }

    Node* start = prev->next;
    Node* end = start;

    for (int i = 0; i < high - low; i++) {
        end = end->next;
    }

    Node* next = end->next;
    end->next = NULL;

    prev->next = reverseListNode(start);
    start->next = next;

    return dummy->next;
}
