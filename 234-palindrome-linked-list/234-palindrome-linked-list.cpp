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
    bool isPalindrome(ListNode* head) {
            
            if(head==NULL || head->next==NULL)
              return true;
            // ListNode *temp = new ListNode(-1);
            // ListNode *ptr = temp;
            // ListNode *headptr = head;
            // int size = 0;
            // while(headptr!=NULL){
            //         size++;
            //         ListNode *x = new ListNode(headptr->val);
            //         ptr->next=x;
            //         ptr=ptr->next;
            //         headptr = headptr->next;
            // }
            ListNode *slow = head;
            ListNode *fast = head;
            
            while(fast->next!=NULL && fast->next->next!=NULL){
                    fast=fast->next->next;
                    slow=slow->next;
            }
            ListNode *p1=NULL,*p2=slow->next,*p3=slow->next->next;
            while(p2!=NULL){
                    p2->next = p1;
                    p1=p2;
                    p2=p3;
                    if(p3!=NULL)
                     p3=p3->next;
            }
            
            ListNode *ptr1 = p1;
            
            while(head!=NULL && ptr1!=NULL){
                    
                  
            if(head->val !=ptr1->val) return false;
                   head=head->next;
                    ptr1=ptr1->next;
                  
            }
           return true;
    }
};