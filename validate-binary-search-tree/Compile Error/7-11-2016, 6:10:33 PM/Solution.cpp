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
        
    }
    bool dfs(TreeNode* node, int mi, int ma){
        if(node== NULL) return true;
        
        bool left=dfs(node->left, mi, node->val);
        if(!left) return false;
        bool right=dfs(node->right, node->val, ma);
        if(!right) return false;
        return node->val>mi && node->val<=ma;
    }
};