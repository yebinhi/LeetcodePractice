// https://leetcode.com/problems/merge-k-sorted-lists

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

    struct cmp{
        bool operator()(ListNode* p, ListNode* q){
            return p->val>q->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int len=lists.size();
        if(len<=0) return NULL;
        
        priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
        ListNode *dummy = new ListNode(0), *tail=dummy;
        for(int i=0; i<len; i++){
            if(lists[i]!=NULL) pq.push(lists[i]);
        }
        
        while(!pq.empty()){
            tail->next=pq.top();
            tail=tail->next;
            pq.pop();
            if(tail->next) pq.push(tail->next);
        }
        return dummy->next;
    }
};