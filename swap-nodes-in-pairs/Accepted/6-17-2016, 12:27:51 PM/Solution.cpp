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
        if(head == NULL || head->next == NULL) return head;
        ListNode* dummyhead =  new ListNode(0);
        ListNode* prev = dummyhead;
        ListNode* p=head;
        dummyhead->next = head;
        while(p && p->next){
            ListNode* q=p->next;
            ListNode* r=q->next;
            prev->next=q;
            q->next=p;
            p->next=r;
            prev=p;
            p=prev->next;
        }
        return dummyhead->next;
    }
};