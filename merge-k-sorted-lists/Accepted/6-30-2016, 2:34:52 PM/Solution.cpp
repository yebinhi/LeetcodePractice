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
    struct compNode{
        bool operator()(ListNode* a, ListNode* b){
            return a->val > b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n<=0) return NULL;
        priority_queue<ListNode*, vector<ListNode*>, compNode> pq;
        ListNode* dummy=new ListNode(0), *h=dummy;
        
        for(int i=0; i<n; i++){
            if(lists[i]) pq.push(lists[i]);
        }
        
        while(!pq.empty()){
            ListNode* node=pq.top(); pq.pop();
            h->next=node;
            if(node->next) pq.push(node->next);
            h=h->next;
        }
        return dummy->next;
    }
};