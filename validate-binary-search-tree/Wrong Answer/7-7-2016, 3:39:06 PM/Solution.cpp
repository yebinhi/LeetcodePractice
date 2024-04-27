// https://leetcode.com/problems/validate-binary-search-tree

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
    bool isValidBST(TreeNode* root) {
        return isvalid(root, INT_MIN, INT_MAX);
    }
    bool isvalid(TreeNode* node, int mn, int mx){
        if(node==NULL) return true;
        return node->val <mx && node->val>mn 
               && isvalid(node->left, mn, node->val)
               && isvalid(node->right, node->val, mx);
        
    }
};