/*https://www.codingninjas.com/codestudio/problems/merge-k-sorted-lists_992772?topList=love-babbar-dsa-sheet-problems*/



public class Solution {
	public static LinkedListNode<Integer>mergetwolist(LinkedListNode<Integer>l1,LinkedListNode<Integer>l2){
		LinkedListNode<Integer>dummy=new LinkedListNode<Integer>(0);
		LinkedListNode<Integer>tail=dummy;
		while(l1!=null && l2!=null){
			if(l1.data<l2.data){
				tail.next=l1;
				l1=l1.next;
			}
			else{
				tail.next=l2;
				l2=l2.next;
			}
			tail=tail.next;
		}
		if(l1!=null){
			tail.next=l1;
		}
		else{
			tail.next=l2;
		}
		return dummy.next;
	}
    public static LinkedListNode<Integer> mergeKLists(LinkedListNode<Integer>[] listArray) {
        // Write your code here.
    LinkedListNode<Integer>mergelist=null;
	for(int i=0;i<listArray.length;i++){
		LinkedListNode<Integer>list=listArray[i];
		mergelist=mergetwolist(mergelist,list);
	}
	return mergelist;
	}
}
