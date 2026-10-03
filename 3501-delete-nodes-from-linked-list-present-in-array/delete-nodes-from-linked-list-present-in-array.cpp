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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        unordered_set<int> st(nums.begin(), nums.end());

        while(head != NULL && st.find(head->val) != st.end()){ // if head needs to be deleted

            // ListNode* node = head; // for deleting it later on
            
            head = head->next;

            // delete(node); // deleted node
        }

        ListNode* temp = head;

        while(temp != NULL && temp->next != NULL){

            if(st.find(temp->next->val) != st.end()){

                // ListNode* node = temp->next; // storing it for delete it later on

                temp->next = temp->next->next;

                // delete(node); // deleted node
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};