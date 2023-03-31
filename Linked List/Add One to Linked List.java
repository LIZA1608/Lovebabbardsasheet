/*https://www.codingninjas.com/codestudio/problems/add-one-to-linked-list_920456?topList=love-babbar-dsa-sheet-problems*/

import java.util.* ;
import java.io.*; 

/*************************************************************************

    Following is the class structure of the LinkedListNode class:
	
	public class LinkedListNode {
	int data;
	LinkedListNode next;

	LinkedListNode(int data) {
		this.data = data;
		this.next = null;
	}
};

*************************************************************************/
public class Solution {
public static LinkedListNode reverse(LinkedListNode head){
LinkedListNode prev=null;
LinkedListNode curr=head;
LinkedListNode  nextp=null;
while(curr!=null){
	nextp=curr.next;
	curr.next=prev;
	prev=curr;
	curr=nextp;
}
return prev;
} 
	public static LinkedListNode addOneToList(LinkedListNode head) {
		// Write your code here
	if(head==null){
		head=new LinkedListNode(1);
		return head;
	}
	LinkedListNode newnode=head;
	while(head!=null && head.next.data!=-1){
		head=head.next;
	}
	head.next=null;
	head=newnode;
	head=reverse(head);
	int carry=1;
	LinkedListNode curr=head;
	LinkedListNode prev=null;
	while(curr!=null){
		int sum=carry+curr.data;
		if(sum>9){
			carry=1;
		}
		else{
			carry=0;
		}
		sum=sum%10;
		curr.data=sum;
		prev=curr;
		curr=curr.next;
	}
	if(carry==1){
		prev.next=new LinkedListNode(1);
	}
	head=reverse(head);
	newnode=head;
	while(head.next!=null){
		head=head.next;
	}
	head.next=new LinkedListNode(-1);
	return newnode;

	}

}
