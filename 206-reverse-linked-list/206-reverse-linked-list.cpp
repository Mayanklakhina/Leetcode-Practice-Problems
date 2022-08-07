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
    ListNode* reverseList(ListNode* head) {
        vector<int> answer;
            
            for(ListNode *curr=head;curr!=NULL;curr=curr->next){
                    answer.push_back(curr->val);
            }
            
            for(ListNode *curr=head;curr!=NULL;curr=curr->next){
                    curr->val = answer.back();
                    answer.pop_back();
            }
            return head;
    }
};