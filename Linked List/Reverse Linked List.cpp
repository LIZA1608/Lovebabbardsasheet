/*https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_799897?topList=love-babbar-dsa-sheet-problems*/

#include <bits/stdc++.h> 
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL || head->next==NULL){
        return head;
    }
    LinkedListNode<int>*ans=reverseLinkedList(head->next);
    head->next->next=head;
    head->next=NULL;
    return ans;
}
