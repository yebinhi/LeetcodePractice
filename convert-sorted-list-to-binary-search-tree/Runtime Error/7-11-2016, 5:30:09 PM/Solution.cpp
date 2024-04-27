// https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* listnode;
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL;
        
        ListNode* cur=head;
        int count=0;
        while(cur){
            cur=cur->next;
            count++;
        }
        listnode=head;
        return dfs(0, count);
    }
    
    TreeNode* dfs(int s, int e){
        if(s>e) return NULL;
        int mid=(s+e)/2;
        TreeNode* l=dfs(s,mid-1);
        TreeNode* parent= new TreeNode(listnode->val);
        parent->left=l;
        listnode=listnode->next;
        TreeNode* r=dfs(mid,e);
        parent->right=r;
        return parent;
    }
};