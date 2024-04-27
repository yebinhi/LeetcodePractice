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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return NULL;
        
        ListNode dummyHead(0), *cur=head, *tail=&dummyHead;
        
        while(cur){
            ListNode* grouphead=cur;
            int i=1;
            for(i=1; i<k && cur->next != NULL; i++) cur=cur->next;
            if(i<k){
                tail->next = grouphead;
                return dummyHead.next;
            }
            cur=cur->next;
            pair<ListNode*, ListNode*> ht = reverse(grouphead, cur);
            tail->next=ht.first;
            tail=ht.second;
        }
        return dummyHead.next;
    }
    
    pair<ListNode*, ListNode*> reverse(ListNode* s, ListNode* e){
        ListNode* cur=s, *news=NULL;
        
        while(cur != e){
            ListNode* tmp=cur->next;
            cur->next=news;
            news=cur;
            cur=tmp;
        }
        return make_pair(news, s);
    }
};