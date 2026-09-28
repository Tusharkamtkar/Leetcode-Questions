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
        
        if(head == NULL || head->next == NULL){
            return head;
        }

        vector<int> arr;

        ListNode* temp = head;

        while(temp != NULL){ // FOR ODD!
            arr.push_back(temp->val);

            if(temp->next == NULL){
                break;
            }

            temp = temp->next->next;
        }

        temp = head->next;

        while(temp != NULL){ // FOR EVEN!
            arr.push_back(temp->val);

            if(temp->next == NULL){
                break;
            }
            
            temp = temp->next->next;
        }

        // if(temp){
        //     arr.push_back(temp->val); // if any element remains at last
        // }

        temp = head; // assigning the values in LinkedList again
        int i = 0; // coz we stored elements in arr

        while(temp != NULL){
            temp->val = arr[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};