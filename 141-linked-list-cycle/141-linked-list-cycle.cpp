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
    bool hasCycle(ListNode *head) {
            
            unordered_set<ListNode *> s;
            
            for(ListNode *curr=head;curr!=NULL;curr=curr->next){
                    if(s.find(curr)!=s.end())
                            return true;
                    
                    s.insert(curr);
            }
            return false;
            
            
//             if(head==NULL || head->next==NULL)
//                     return false;
//         ListNode *fast = head;
//         ListNode *slow = head;
//             while(fast->next!=NULL && fast->next->next!=NULL){
//                     fast=fast->next->next;
//                     slow=slow->next;
//                     if(fast==slow)
//                             return true;
//             }
//             return false;
            
    }
};