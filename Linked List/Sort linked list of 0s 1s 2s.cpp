/*https://www.codingninjas.com/codestudio/problems/sort-linked-list-of-0s-1s-2s_1071937?topList=love-babbar-dsa-sheet-problems*/

/********************************
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

********************************/
void insertAtTail(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
}
Node* sortList(Node *head)
{
    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;
    Node* oneHead=new Node(-1);
     Node* oneTail=oneHead;
    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;
    Node* curr=head;
    //cerate a seprate list for 0,1,and 2
    while(curr!=NULL){
        int value=curr->data;
        if(value==0){
            insertAtTail(zeroTail,curr);
        }
        else if(value==1){
             insertAtTail(oneTail,curr);
        }
        else if(value==2){
             insertAtTail(twoTail,curr);
        }
        curr=curr->next;
    }
    //now merge it 
    if(oneHead->next!=NULL){
        zeroTail->next=oneHead->next;
    }
    else{
        zeroTail->next=twoHead->next;
    }
    oneTail->next=twoHead->next;
    twoTail->next=NULL;
    //setup start
    head=zeroHead->next;
    //delete dummy nodes
    delete(zeroHead);
    delete(oneHead);
    delete(twoHead);
    return head;
}
