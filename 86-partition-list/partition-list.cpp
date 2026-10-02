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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* temp = head;

        ListNode* small = new ListNode();
        ListNode* Psmall = small;

        ListNode* large  = new ListNode();
        ListNode* Plarge = large;

        while(temp != NULL){
            
            if(temp->val < x){
                Psmall->next = new ListNode(temp->val);
                Psmall = Psmall->next;
            }
            else{
                Plarge->next = new ListNode(temp->val);
                Plarge = Plarge->next;
            }

            temp = temp->next;
        }
        Psmall->next = large->next;

        return small->next;
    }
};