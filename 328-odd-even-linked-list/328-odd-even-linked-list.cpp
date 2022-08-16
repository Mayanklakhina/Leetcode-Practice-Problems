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
            int index=1;
            for(ListNode *curr =  head; curr != NULL; curr = curr->next){
                    if (index % 2 == 0) {
                            if(evenS==NULL){
                                    evenS=curr;
                                    evenE=evenS;
                                    index++;
                            }
                            else{
                                    evenE->next = curr;
                                    evenE=evenE->next;
                                    index++;
                            }
                    }
                    else{
                           if(oddS==NULL){
                                    oddS=curr;
                                    oddE=oddS;
                                      index++;
                            }
                            else{
                                    oddE->next = curr;
                                    oddE=oddE->next;
                                    index++;
                            } 
                    }
            }
            if(oddS==NULL || evenS==NULL)
                    return head;
            oddE->next = evenS;
            evenE->next = NULL;
            
            return oddS;
    }
};