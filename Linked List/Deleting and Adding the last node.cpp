/*https://www.codingninjas.com/codestudio/problems/deleting-and-adding-the-last-node_1170051?topList=love-babbar-dsa-sheet-problems*/


Node *delAddLastNode(Node *head) {
  Node *temp;
   if(head==NULL|| head->next==NULL){
       return head;
   }
   Node*curr=head;
   Node*prev=head;
   while(curr->next!=NULL){
       prev=curr;
       curr=curr->next;
   }
   curr->next=head;
   prev->next=NULL;
   return curr;

}
