/*https://www.codingninjas.com/codestudio/problems/partition_1172151?topList=love-babbar-dsa-sheet-problems&leftPanelTab=3*/


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

Node*findPartiton(Node*head, int x)
{
	if(head==NULL ||head->next==NULL)
        return head;
    Node*small=NULL;
    Node*big=NULL;
    Node*stail=NULL;
    Node*btail=NULL;
    Node* temp=head;
    while(temp){
        Node* newnode=new Node(temp->data);
        if(temp->data<x){
            if(small==NULL){
                small=newnode;
                stail=newnode;
            }
            else{
                stail->next=newnode;
                stail=newnode;
            }
        }
        else{
            if(big==NULL){
                big=newnode;
                btail=newnode;
            }
            else{
                btail->next=newnode;
                btail=newnode;
            }
        }
        temp=temp->next;
    }
    if(stail)
        stail->next=big;
    if(btail)
        btail->next=NULL;
    if(!stail)
        return big;
    return small;
    
}
