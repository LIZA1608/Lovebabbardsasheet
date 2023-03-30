/*https://www.codingninjas.com/codestudio/problems/k-th-node-from-the-end-of-the-linked-list_1171164?topList=love-babbar-dsa-sheet-problems*/

#include <bits/stdc++.h> 
/*

Following is the Node Structure written below
 
class node
{
	public:
	int data;
    node * next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
*/

node *findKthFromLast(node *head, int k)
{
	//Write your Code Here
	node*temp=NULL;
	if(head==NULL || head->next==NULL){
		return head;
	}
	temp=head;
	int count=0;
	while(temp->next!=NULL){
		temp=temp->next;
		count++;
	}
	temp=head;
	for(int i=0;i<=count-k;i++){
		temp=temp->next;
	}
	return temp;
}
