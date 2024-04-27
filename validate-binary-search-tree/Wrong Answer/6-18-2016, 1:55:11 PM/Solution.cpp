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
        return valid(root, (long long int)INT_MIN-1, (long long int)INT_MAX+1);
    }
    bool valid(TreeNode* node, long long int min, long long int max){
        if(node == NULL) return true;
        return node->val <= max && node->val > min 
        && valid(node->left, min, node->val) 
        && valid(node->right, node->val, max);
    }
};