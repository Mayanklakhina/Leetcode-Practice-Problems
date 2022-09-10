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
            if(head==NULL) return head;
            ListNode *p1=NULL,*p2=head,*p3=head->next;
            while(p2!=NULL){
                    p2->next = p1;
                    p1=p2;
                    p2=p3;
                    if(p3!=NULL)
                            p3=p3->next;
            }
            return p1;
            
//  Brute Force Approach
//         vector<int> answer;
            
//             for(ListNode *curr=head;curr!=NULL;curr=curr->next){
//                     answer.push_back(curr->val);
//             }
            
//             for(ListNode *curr=head;curr!=NULL;curr=curr->next){
//                     curr->val = answer.back();
//                     answer.pop_back();
//             }
//             return head;
    }
};