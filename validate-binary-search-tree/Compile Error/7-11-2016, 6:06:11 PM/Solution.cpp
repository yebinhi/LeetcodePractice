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
        return dfs(root);
    }
    bool dfs(TreeNode* node){
        if(!node) return true;
        
        bool l=dfs(node->left);
        if(!l) return false;
        bool r=dfs(node->right);
        if(!r) return false;
        if(node->left < node->val && node->right > node->val) return true;
        return false;
    }
};