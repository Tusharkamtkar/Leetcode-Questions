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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* sumNode = head->next;
        ListNode* temp = sumNode;

        while(temp != NULL && temp->next != NULL){

            int sum = 0;

            while(temp->val != 0){
                
                sum += temp->val;

                temp = temp->next;
            }

            sumNode->val = sum;

            temp = temp->next;

            sumNode->next = temp;

            sumNode = sumNode->next;
        }
        return head->next;
    }
};