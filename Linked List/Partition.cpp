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
	Node* small=new Node(0);
    Node *high=new Node(0);
    Node*smallhead=small;
    Node*highhead=high;
    while(head!=NULL){
        if(head->data<x){
            smallhead->next=head;
            smallhead=smallhead->next;
        }
        else{
            highhead->next=head;
            highhead=highhead->next;
        }
        head=head->next;
    }
    highhead->next=NULL;
    smallhead->next=high->next;
    return small->next;
}
