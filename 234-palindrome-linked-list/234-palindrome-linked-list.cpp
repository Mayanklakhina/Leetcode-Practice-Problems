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
            ListNode *temp = new ListNode(-1);
            ListNode *ptr = temp;
            ListNode *headptr = head;
            while(headptr!=NULL){
                    ListNode *x = new ListNode(headptr->val);
                    ptr->next=x;
                    ptr=ptr->next;
                    headptr = headptr->next;
            }
            ListNode *p1=NULL,*p2=temp->next,*p3=temp->next->next;
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