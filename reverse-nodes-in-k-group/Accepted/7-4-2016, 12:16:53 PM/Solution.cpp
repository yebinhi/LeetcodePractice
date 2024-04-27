// https://leetcode.com/problems/reverse-nodes-in-k-group

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
    ListNode *reverseKGroup(ListNode *head, int k) {
        ListNode tmphead(0);
        ListNode *p = head, *tail = &tmphead;
        while(p)
        {
            ListNode *groupHead = p;
            int i = 1;
            for(i = 1; i < k && p->next != NULL; i++)p = p->next;
            if(i != k){tail->next = groupHead; return tmphead.next;}
            p = p->next;
            pair<ListNode*, ListNode*>ht = reverseList(groupHead, p);
            tail->next = ht.first;
            tail = ht.second;
        }
        return tmphead.next;
    }

    pair<ListNode*, ListNode*> reverseList(ListNode* head, ListNode *end)
    {
        ListNode *p = head, *newHead = NULL;
        while(p != end)
        {
            ListNode *tmp = p->next;
            p->next = newHead;
            newHead = p;
            p = tmp;
        }
        return make_pair(newHead, head);
    }
};