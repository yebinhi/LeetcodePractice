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
        return validSubTree(root, NULL, NULL);
    }
    
    bool validSubTree(TreeNode* node, int low, int high){
        if(node == NULL) return true;
        return (node->val > low || low == NULL) && (node->val < high || high == NULL)
               && validSubTree(node->left, low, node->val)
               && validSubTree(node->right, node->val, high);
    }
};