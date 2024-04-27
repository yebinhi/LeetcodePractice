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
       
        int carry(0);
        while(l1 || l2){
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            int digit = x+y+carry;
            head->next = new ListNode(digit%10);
            carry=digit/10;
            head=head->next;
            if(!l1) l1=l1->next;
            if(!l2) l2=l2->next;
        }
        if(carry != 0){
            head->next = new ListNode(carry);
        }
        return current->next;
    }
};