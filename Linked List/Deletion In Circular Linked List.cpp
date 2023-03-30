/*https://www.codingninjas.com/codestudio/problems/deletion-in-circular-linked-list_630409?topList=love-babbar-dsa-sheet-problems*/


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

Node* deleteNode(Node* head, int key) 
{
   if(head==NULL){
       return head;
   }
    if(head->next==head &&head->data==key){
        return NULL;
    }
    Node* prev=head;
    Node*curr=head->next;
    if(prev->data==key){
        while(prev->next!=head){
            prev=prev->next;
            if(prev->next==head){
                prev->next=head->next;
                return head->next;
            }
        }
    }
while(curr!=head){
    int value=curr->data;
    Node* temp=curr->next;
    if(value==key){
        prev->next=temp;
        curr=temp;
    }
    else{
        prev=curr;
        curr=curr->next;
    }
}
    return head;
}
