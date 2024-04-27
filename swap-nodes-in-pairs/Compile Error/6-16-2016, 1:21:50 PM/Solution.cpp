// https://leetcode.com/problems/swap-nodes-in-pairs

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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return head;
        
        ListNode* newHead = new ListNode(0);
        newHead->next=head;
        ListNode* p=head;
        ListNode* prev = newHead;
        while(p != NULL && p->next != NULL){
            ListNode* q = p->next;
            ListNode* r= p->next->next;
            prev->next = q;
            q->next = p;
            p->next= r
            prev=p;
            p=r;
        }
        return newHead->next;
    }
};