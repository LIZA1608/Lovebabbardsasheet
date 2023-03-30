/*https://www.codingninjas.com/codestudio/problems/find-pair-with-a-given-sum-in-a-doubly-linked-list_1164172?topList=love-babbar-dsa-sheet-problems*/

#include <bits/stdc++.h> 



bool findPair(Node* head, int k)
{
    if(head==NULL && head->next==NULL){
        return false;
    }
    Node* first=head;
    Node*second=head;
    while(second->next!=NULL){
        second=second->next;
    }
        while(first!=second && second!=first){
            if((first->data+second->data)==k){
                return true;
                break;
            }
            else if(first->data+second->data<k){
                first=first->next;
        }
        else
        second=second->prev;
    }
    return false;
}
