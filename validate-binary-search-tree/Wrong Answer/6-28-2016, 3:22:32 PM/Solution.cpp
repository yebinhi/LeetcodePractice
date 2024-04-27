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
        return valid(root, long (INT_MIN -1), long (INT_MAX +1));
    }
    bool valid(TreeNode* n, long low, long high){
        if(n == NULL) return true;
        return n->val > low && n->val < high
        && valid(n->left, low, n->val)
        && valid(n->right, n->val, high);
    }
};