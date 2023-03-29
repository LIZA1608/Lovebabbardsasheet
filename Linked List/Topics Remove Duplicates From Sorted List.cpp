/*https://www.codingninjas.com/codestudio/problems/unique-sorted-list_2420283?topList=love-babbar-dsa-sheet-problems*/

/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node * uniqueSortedList(Node * head) {
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
    
    while(curr!=NULL){
        if((curr->next!=NULL) &&curr->data==curr->next->data){
            Node* forward=curr->next->next;
            Node* nodetoDelete=curr->next;
            delete(nodetoDelete);
            curr->next=forward;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
    // Write your code here.
}
