/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* iter = head;
	int length = 0, i = 1;
	while(iter!=NULL) iter = iter -> next, length++;   
	if(length == n) return head -> next;          
	for(iter = head; i < length - n; i++) iter = iter -> next;
	iter -> next = iter -> next -> next;      // remove the nth node from the end
	return head;
    }
};