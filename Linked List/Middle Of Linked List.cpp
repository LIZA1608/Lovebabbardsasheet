/*https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?topList=love-babbar-dsa-sheet-problems*/

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
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

Node *findMiddle(Node *head) {
    // Write your code here
    Node *slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
