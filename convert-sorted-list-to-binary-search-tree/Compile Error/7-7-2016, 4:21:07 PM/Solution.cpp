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
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL;
        int count=0;
        ListNode* cur=head;
        while(cur){
            cur=cur->next;
            count++;
        }
        return covert(0, count-1)
        
    }
    
    TreeNode* covert(int s, int e){
        if(s>e) return NULL;
        int mid=(s+e)/2
        
        TreeNode* left=covert(s, mid-1);
        TreeNode* parent=new TreeNode(node->val);
        parent->left=left;
        head=head->next;
        TreeNode* right=covert(mid+1, e);
        parent->right=right;
        return parent;
    }
};