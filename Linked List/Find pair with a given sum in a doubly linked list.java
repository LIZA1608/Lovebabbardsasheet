
/*https://www.codingninjas.com/codestudio/problems/find-pair-with-a-given-sum-in-a-doubly-linked-list_1164172?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0*/
import java.util.* ;
import java.io.*; 
public class Solution {
     public static boolean findPair(Node<Integer> head, int k) {
         if(head==null || head.next==null){
             return false;
         }
        Node<Integer>first=head;
        Node<Integer>second=head;
while(second.next!=null){
    second=second.next;
}
while(first!=second && second!=first){
    if((first.data+second.data)==k){
        return true;
       
    }
    else if(first.data+second.data<k){
        first=first.next;
    }
    else
    second=second.prev;
}
return false;
     }
}


