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
        return valid(root, NULL, NULL); 
    }
    bool valid(TreeNode* node, int low, int high){
        if(node) return true;
        return (low == NULL || node->val) && (high == NULL || node->val < high)
                && valid(node->left, low, node->val)
                && valid(node->right, node->val, high);
    }
};