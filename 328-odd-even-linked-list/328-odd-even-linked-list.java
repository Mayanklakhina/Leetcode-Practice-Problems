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
    public ListNode oddEvenList(ListNode head) {
        ListNode evenS = null, evenE=null, oddS=null, oddE=null;
            int index=1;
            for(ListNode curr =  head; curr != null; curr = curr.next){
                    if (index % 2 == 0) {
                            if(evenS==null){
                                    evenS=curr;
                                    evenE=evenS;
                                    index++;
                            }
                            else{
                                    evenE.next = curr;
                                    evenE=evenE.next;
                                    index++;
                            }
                    }
                    else{
                           if(oddS==null){
                                    oddS=curr;
                                    oddE=oddS;
                                      index++;
                            }
                            else{
                                    oddE.next = curr;
                                    oddE=oddE.next;
                                    index++;
                            } 
                    }
            }
            if(oddS==null || evenS==null)
                    return head;
            oddE.next = evenS;
            evenE.next = null;
            
            return oddS;
    }
}