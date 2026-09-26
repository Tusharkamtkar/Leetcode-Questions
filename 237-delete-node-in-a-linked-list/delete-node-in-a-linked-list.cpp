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
    void deleteNode(ListNode* node) {
        
        node->val = node->next->val; // value assigned to node which should be deleted

        node->next = node->next->next; // just update acc to que. and skip the node which given to delete!
    }
};