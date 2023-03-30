
/*https://www.codingninjas.com/codestudio/problems/split-a-circular-linked-list_1071003?topList=love-babbar-dsa-sheet-problems*/

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

void splitCircularList(Node *head)
{
   if(head==NULL)
       return;
   Node* slow=head;
    Node* fast=head;
    while(fast->next->next!=head && fast->next!=head){
        fast=fast->next->next;
        slow=slow->next;
    }
    if(fast->next->next==head){
        fast->next->next=slow->next;
        slow->next=head;
    }
     if(fast->next==head){
        fast->next=slow->next;
        slow->next=head;
    }
}
