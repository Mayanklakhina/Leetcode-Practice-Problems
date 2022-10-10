/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteMiddle(ListNode head) {
         if (head == null) {
          return null;
       }
       if (head.next == null) {
          return null;
       }
        ListNode slow = head, fast = head, prev = head;
            while(fast != null && fast.next != null){
                if(slow != head) prev = prev.next; 
                    // since we want prev to start one step later than slow node

                    slow = slow.next;
                    fast = fast.next.next;
            }
            prev.next = slow.next;
            return head;
            
    }
}