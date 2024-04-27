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
    struct comNode{
        bool operator()(ListNode* node1, ListNode* node2){
            return node1->val > node2->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n<=0) return NULL;
        
        priority_queue<ListNode*, vector<ListNode*>, comNode> q;
        
        for(int i=0; i<n; i++){
            q.push(lists[i]);
        }
        ListNode* dummy=new ListNode(0), *cur=dummy;
        while(!q.empty()){
            ListNode* node=q.top(); q.pop();
            cur->next=node;
            if(node->next) q.push(node->next);
            cur=cur->next;
        }
        return dummy->next;
    }
};