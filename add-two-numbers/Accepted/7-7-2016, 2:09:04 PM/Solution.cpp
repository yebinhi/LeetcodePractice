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
        ListNode* dummy=new ListNode(0), *cur=dummy;
        int carry=0;
        while(l1 || l2){
            int v1=(l1==NULL)? 0:l1->val;
            int v2=(l2==NULL)? 0:l2->val;
            int tmp=v1+v2+carry;
            ListNode* node= new ListNode(tmp%10);
            carry=tmp/10;
            cur->next=node;
            cur=cur->next;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        if(carry>0){
            ListNode* newnode= new ListNode(carry);
            cur->next=newnode;
        }
        return dummy->next;
    }
};