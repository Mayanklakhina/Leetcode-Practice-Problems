/**

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		int len1 = 0, len2 = 0;
		ListNode *ptr1 = headA;
		ListNode *ptr2 = headB;
                
          while(ptr1 != NULL || ptr2 != NULL) {
            if(ptr1 != NULL) {
                len1++;
                ptr1 = ptr1->next;
            }
            if(ptr2 != NULL) {
                len2++; 
                    ptr2 = ptr2->next;
            }
          }

		int diff = abs(len1 - len2);
		if(len1 > len2){
			while(diff){
				headA = headA -> next;
				diff--;
			}
		}
		else{
			while(diff){
				headB = headB -> next;
				diff--;
			}
		}
		while(headA != NULL and headB != NULL){
			if(headA == headB){
				return headA;
			}
			headA = headA -> next;
			headB = headB -> next;
		}
		return NULL;
	}
};