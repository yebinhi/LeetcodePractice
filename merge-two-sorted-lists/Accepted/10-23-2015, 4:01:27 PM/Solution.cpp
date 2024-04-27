// https://leetcode.com/problems/merge-two-sorted-lists

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* res = new ListNode(0);
        ListNode* current = res;
        while(l1 != NULL && l2 != NULL){
            if(l1->val < l2->val){
                current->next = l1;
                l1=l1->next;
            }else{
                current->next = l2;
                l2=l2->next;
            }
            current = current->next;
        }
        current->next = l1 ? l1:l2;
            return res->next;
    }
};