/*https://www.codingninjas.com/codestudio/problems/reverse-a-doubly-linked-list_1116098?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0*/

Node* reverseDLL(Node* head)
{   
   Node* curr=head;
    Node*nextptr=NULL;
    Node* prev=NULL;
    while(curr!=NULL){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }
    return prev;
}






//------------------------IN JAVA-------------------------------------------------------------------------------------------------------------
public class Solution 
{

    public static Node<Integer> reverseDLL(Node<Integer> head) 
    {
        // Write your code here.
        ArrayList<Integer>list=new ArrayList<>();
        Node<Integer>curr=head;
        while(curr!=null){
            list.add(curr.data);
            curr=curr.next;
        }
        java.util.Collections.reverse(list);
        
        int i=0;
        Node<Integer>ans=head;
        while(ans!=null){
            ans.data=list.get(i);
            i++;
            ans=ans.next;
        }
        return head;
    }

}
