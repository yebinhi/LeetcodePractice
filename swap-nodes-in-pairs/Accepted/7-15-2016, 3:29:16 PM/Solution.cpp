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
        if(!head) return NULL;
        
        ListNode* dummyhead= new ListNode(0), *newhead=dummyhead, *cur=head;
        dummyhead->next=head;
        while(cur!= NULL && cur->next != NULL){
            ListNode* node= cur->next, *r=cur->next->next;
            newhead->next=node;
            node->next=cur;
            cur->next=r;
            newhead=cur;
            cur=r;
        }
        
        return dummyhead->next;
    }
};