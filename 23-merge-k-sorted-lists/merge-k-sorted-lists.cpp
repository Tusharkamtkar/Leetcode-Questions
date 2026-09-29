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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){

        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }

        if(list1->val <= list2->val){

            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else{

            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
        return NULL;
    }

    ListNode* partitionAndMerge(int start, int end, vector<ListNode*>& lists){

        if(start > end){
            return NULL;
        }
        if(start == end){
            return lists[start];
        }

        int mid = start + (end - start) / 2;

        ListNode* list1 = partitionAndMerge(start, mid, lists);
        ListNode* list2 = partitionAndMerge(mid+1, end, lists);

        return mergeTwoLists(list1, list2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int k = lists.size();

        if(k == 0){
            return NULL;
        }

       return partitionAndMerge(0, k-1, lists); // 0 = start, k-1 = end!
    }
};