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

    ListNode* findNthNode(ListNode* temp, int k){

        int count = 0;

        while(temp != NULL){
            count++;
            
            if(count == k) return temp;

            temp = temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || k == 0) return head;
        
        ListNode* temp = head;

        int length = 1;

        while(temp->next != NULL){

            temp = temp->next;
            length++;
        }

        if(k % length == 0) return head;

        k = k % length; // minimize the length of k

        temp->next = head;

        ListNode* newTail = findNthNode(head, length - k);

        head = newTail->next;
        newTail->next = NULL;

        return head;
    }
};