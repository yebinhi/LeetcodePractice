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
    bool valid(TreeNode* root, int low, int high){
        if(root == NULL){
            return true;
        }
        return root->val>low && root->val<high && valid(root->left, INT_MIN, root->val) && valid(root->right, root->val, INT_MAX);
    }
};