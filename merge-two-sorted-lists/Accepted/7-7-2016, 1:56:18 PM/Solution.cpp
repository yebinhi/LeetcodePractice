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
        if(!l1 && !l2 ) return NULL;
        if(!l1) return l2;
        if(!l2) return l1;
        
        ListNode* dummy=new ListNode(0), *newdummy=dummy;
        while(l1 && l2){
            if(l1->val < l2->val){
                dummy->next=l1;
                l1=l1->next;
                dummy=dummy->next;
            }else{
                dummy->next=l2;
                l2=l2->next;
                dummy=dummy->next;
            }
        }
        if(l1) dummy->next=l1;
        if(l2) dummy->next=l2;
        return newdummy->next;
    }
};