/*https://www.codingninjas.com/codestudio/problems/detect-the-first-node-of-the-loop_1112628?topList=love-babbar-dsa-sheet-problems*/

#include <bits/stdc++.h> 
Node *firstNode(Node *head)
{
 Node *slow=head;
 if(head==NULL || head->next==NULL){
     return NULL;
 }
 Node* prev=head;
 Node* fast=head;
 while(fast!=NULL && fast->next!=NULL){
     slow=slow->next;
     fast=fast->next->next;
     if(slow==fast){
     while(slow!=prev){
         slow=slow->next;
         prev=prev->next;
     }
     return prev;
     }
 }   
 return NULL;
}
