/*https://www.codingninjas.com/codestudio/problems/intersection-of-linked-list_630457?topList=love-babbar-dsa-sheet-problems*/

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

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
	Node*curr=firstHead;
	Node*temp=secondHead;
	while(curr!=temp){
		if(curr==NULL){
			curr=secondHead;
		}
		else{
			curr=curr->next;
		}
		if(temp==NULL){
			temp=firstHead;
		}
		else{
			temp=temp->next;
		}
	}
	if(curr==NULL){
		return -1;
	}
	return curr->data;
}
