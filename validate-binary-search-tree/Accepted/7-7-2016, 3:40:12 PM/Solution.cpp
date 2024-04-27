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
        return isvalid(root, (long long)INT_MIN-1, (long long)INT_MAX+1);
    }
    bool isvalid(TreeNode* node, long long mn, long long mx){
        if(node==NULL) return true;
        return node->val <mx && node->val>mn 
               && isvalid(node->left, mn, node->val)
               && isvalid(node->right, node->val, mx);
        
    }
};