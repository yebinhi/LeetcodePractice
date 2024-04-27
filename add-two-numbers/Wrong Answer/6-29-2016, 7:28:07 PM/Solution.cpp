// https://leetcode.com/problems/add-two-numbers

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* head = new ListNode(0), *curr=head;
        int carry=0, value=0;
        while(l1 || l2){
            int v1=(l1==NULL)? 0 : l1->val;
            int v2=(l2==NULL)? 0 : l2->val;
            value=v1+v2+carry;
            carry=value/10;
            ListNode* node=new ListNode(value%10);
            curr->next=node;
            l1=(l1==NULL)?NULL : l1->next;
            l2=(l2==NULL)?NULL : l2->next;
            curr=curr->next;
        }
        return head->next;
        
    }
};