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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *evenS = NULL, *evenE=NULL, *oddS=NULL, *oddE=NULL;
            int data=0;
            for(ListNode *curr=head;curr!=NULL;curr=curr->next){
                    // int data = curr->val;
                    if(data%2==0){
                            if(evenS==NULL){
                                    evenS=curr;
                                    evenE=evenS;
                                    data++;
                            }
                            else{
                                    evenE->next = curr;
                                    evenE=evenE->next;
                                    data++;
                            }
                    }
                    else{
                           if(oddS==NULL){
                                    oddS=curr;
                                    oddE=oddS;
                                   data++;
                            }
                            else{
                                    oddE->next = curr;
                                    oddE=oddE->next;
                                    data++;
                            } 
                    }
            }
            if(oddS==NULL || evenS==NULL)
                    return head;
            evenE->next = oddS;
            oddE->next = NULL;
            
            return evenS;
    }
};