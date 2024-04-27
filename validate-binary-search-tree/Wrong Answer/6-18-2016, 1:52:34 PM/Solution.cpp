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
        return valid(root, INT_MIN, INT_MAX);
    }
    bool valid(TreeNode* node, int min, int max){
        if(node == NULL) return true;
        return node->val <= max && node->val > min 
        && valid(node->left, min, node->val) 
        && valid(node->right, node->val, max);
    }
};