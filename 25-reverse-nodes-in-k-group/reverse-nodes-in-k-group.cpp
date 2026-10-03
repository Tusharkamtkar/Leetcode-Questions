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

    ListNode* findKthNode(ListNode* temp, int k){
        k--;
        while(temp != NULL && k > 0){
            k--;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* reverse(ListNode* temp){

        ListNode* node = temp;
        ListNode* prev = NULL;

        while(node != NULL){

            ListNode* front = node->next;

            node->next = prev;

            prev = node;
            node = front;
        }
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* temp = head;
        ListNode* prevNode = NULL;

        while(temp != NULL){

            ListNode* KthNode = findKthNode(temp, k);

            if(KthNode == NULL){
                if(prevNode) prevNode->next = temp;
                break;
            }

            ListNode* nextNode = KthNode->next;
            KthNode->next = NULL;

            reverse(temp);

            if(temp == head){
                head = KthNode;
            }
            else{
                prevNode->next = KthNode;
            }
            prevNode = temp;
            temp = nextNode;
        }
        return head;
    }
};