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
        ListNode* head = new ListNode(0);
        ListNode* current = head;
        if(l1==NULL && l1==NULL){
            return head;
        }
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        int carry(0);
        while(l1!=NULL || l2!=NULL){
            int x = (l1!=NULL) ? l1->val : 0;
            int y = (l2!=NULL) ? l2->val : 0;
            int digit = l1->val+l2->val+carry;
            head->next = new ListNode(digit%10);
            carry=digit/10;
            head=head->next;
            l1=l1->next;
            l2=l2->next;
        }
        if(carry != 0){
            head->next = new ListNode(carry);
        }
        return current->next;
    }
};