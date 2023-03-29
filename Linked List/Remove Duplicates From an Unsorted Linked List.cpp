/*https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-unsorted-linked-list_1069331?topList=love-babbar-dsa-sheet-problems*/

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
/* approch-two loops
Node *removeDuplicates(Node *head)
{
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
    while(curr!=NULL && curr->next!=NULL){
        Node* prev=curr;
        while(prev->next!=NULL){
            if(curr->data==prev->next->data){
                Node* duplicate=prev->next;
                prev->next=prev->next->next;
                delete(duplicate);
            }
            else{
                prev=prev->next;
            }
        }
        curr=curr->next;
    }
    return head;
}
*/
//aproch 2->using nmap;
#include<bits/stdc++.h>
Node* removeDuplicates(Node* head){
    unordered_map<int,bool>visited;
    Node* prev=head;
    Node* curr=head->next;
    visited[prev->data]=true;
    while(curr!=NULL){
        if(visited[curr->data]==true){
            prev->next=curr->next;
            delete(curr);
        }
        else{
            visited[curr->data]=true;
            prev=prev->next;
        }
        curr=prev->next;
    }
    return head;
}


//-----------------------------------------------------------------IN JAVA ------------------------------------------------------------------------------------------
class Solution
{
    //Function to remove duplicates from unsorted linked list.
    public Node removeDuplicates(Node head) 
    {
        HashMap<Integer,Boolean>vis=new HashMap<>();
        Node prev=head;
        vis.put(prev.data,true);
        Node curr=head.next;
        while(curr!=null){
            if(vis.containsKey(curr.data)==true){
                prev.next=curr.next;
            }
            else{
                vis.put(curr.data,true);
                prev=prev.next;
            }
            curr=curr.next;
        }
        return head;
    }
}
