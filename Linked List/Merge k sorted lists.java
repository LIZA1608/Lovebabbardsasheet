/*https://www.codingninjas.com/codestudio/problems/merge-k-sorted-lists_992772?topList=love-babbar-dsa-sheet-problems*/

/****************************************************
	Following is the Node class for the Singly Linked List

		class LinkedListNode<Integer> {
			int data;
			LinkedListNode<Integer> next;

			public LinkedListNode(int data) {
				this.data = data;
			}
		}

****************************************************/

public class Solution {
public static LinkedListNode<Integer> mergeTwoLists(LinkedListNode<Integer> l1, LinkedListNode<Integer> l2) {
  LinkedListNode<Integer> dummy = new LinkedListNode<Integer>(0);
   LinkedListNode<Integer> tail = dummy;
    while (l1 != null && l2 != null) {
        if (l1.data < l2.data) {
            tail.next = l1;
            l1 = l1.next;
        } else {
            tail.next = l2;
            l2 = l2.next;
        }
        tail = tail.next;
    }
    tail.next = (l1 != null) ? l1 : l2;
    return dummy.next;
}
    public static LinkedListNode<Integer> mergeKLists(LinkedListNode<Integer>[] lists) {
       LinkedListNode<Integer> mergedList=null;
	   
	   for (int i = 0; i < lists.length; i++) {
LinkedListNode<Integer> list = lists[i];
    mergedList = mergeTwoLists(mergedList, list);
}
    return mergedList;
	   }
    }
