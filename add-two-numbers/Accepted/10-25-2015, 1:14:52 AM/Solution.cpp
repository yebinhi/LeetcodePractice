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
         ListNode rootNode(0);
        ListNode *pCurNode = &rootNode;
        int forward = 0;
        while(l1||l2)
        {
            int v1 = (l1 ? l1->val : 0);
            int v2 = (l2 ? l2->val : 0);
            int sum = v1 + v2 + forward;
            forward = sum / 10;
            sum = sum % 10;
            ListNode *pNode = new ListNode(sum);
            pCurNode->next = pNode;
            pCurNode = pNode;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2 ->next;
        }
        if(forward > 0)
        {
            ListNode *pNode = new ListNode(forward);
            pCurNode->next = pNode;
        }
        return rootNode.next;
    }
    
};