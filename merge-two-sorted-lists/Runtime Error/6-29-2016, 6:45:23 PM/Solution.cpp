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
        if(!l1 && !l2) return l2;
        
        ListNode* head(0);
        ListNode*  theHead;
        while(l1 && l2){
            if(l1->val < l2->val){
                head->next=l1;
                l1=l1->next;
            }else{
                head->next=l2;
                l2=l2->next;
            }
            head=head->next;
        }
        if(l1) return head->next=l1;
        if(l2) return head->next=l2;
        return theHead->next;
    }
};