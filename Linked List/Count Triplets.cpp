/*https://www.codingninjas.com/codestudio/problems/count-triplets_873377?topList=love-babbar-dsa-sheet-problems*/

/***************************************
    Following is the Node class already written.
    class Node 
    {
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int data) 
        {
            next = NULL; prev=NULL;
            this->data = data;
        }
        ~Node() 
        {
            if (next != NULL)
            {
                delete next;
            }
        }
    };

***************************************/
#include<bits/stdc++.h>
int countAllTripletSum(Node *head, int x)
{
    // Write your code here.
    unordered_map<int,int>mp;
    Node*curr=head;
    int count=0;
    while(curr!=NULL){
        Node*res=curr->next;
        while(res!=NULL){
            if(mp.find(x-curr->data-res->data)!=mp.end()){
                count++;
            }
            res=res->next;
        }
        mp[curr->data]++;
        curr=curr->next;
    }
    return count;
}
