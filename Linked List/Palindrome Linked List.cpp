/*https://www.codingninjas.com/codestudio/problems/palindrom-linked-list_799352?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0*/

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>*reverse(LinkedListNode<int>*head){
LinkedListNode<int>* prev=NULL;
LinkedListNode<int>*next=NULL;
LinkedListNode<int>*curr=head;
while(curr!=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}   
return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    LinkedListNode<int>*slow=head;
    LinkedListNode<int>*fast=head;
    if(head==NULL || head->next==NULL){
        return true;
    }
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=reverse(slow->next);
    slow=slow->next;
    while(slow!=NULL){
        if(head->data!=slow->data){
            return false;
        }
        slow=slow->next;
        head=head->next;
    }
    return true;

}


//------------------------------------------IN JAVA------------------------------------------------------------------------------------------------------------------
public class Solution {

	public static boolean isPalindrome(LinkedListNode<Integer> head) {
 ArrayList<Integer> arr=new ArrayList<>();
       while(head!=null){
           arr.add(head.data);
           head=head.next;
       }
       Collections.reverse(arr);
       int i=0,j=arr.size()-1;
       while(i<j){
           if(!arr.get(i).equals(arr.get(j)))
               return false;
           i++;
           j--;
       }
       return true;
	}
}
