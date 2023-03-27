/*https://www.codingninjas.com/codestudio/problems/detect-and-remove-cycle_920523?topList=love-babbar-dsa-sheet-problems*/

#include <bits/stdc++.h> 
bool detectAndRemoveCycle(Node* head)
{
	if(head==NULL|| head->next==NULL){
		return false;
	}
Node* slow=head;
Node* fast=head;
  bool isCycle=false;
while(fast!=NULL && fast->next!=NULL){
	slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
      isCycle=true;
	  break;
	}
}
if(isCycle){
	fast=head;
	while(slow->next!=fast->next){
		slow=slow->next;
		fast=fast->next;
	}
	if(slow==fast){
		while(fast->next!=slow){
			fast=fast->next;
		}
		fast->next=NULL;
		return true;
	}
	slow->next=NULL;
	return true;
}
return false;
}
