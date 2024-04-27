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
        long long int mi=INT_MIN-1, ma=INT_MAX+1;
        
        return dfs(root, mi, ma);
    }
    bool dfs(TreeNode* node, long long int mi, long long int ma){
        if(node== NULL) return true;
        
        bool l=dfs(node->left, mi, node->val);
        
        bool r=dfs(node->right, node->val, ma);
        
        return node->val>mi && node->val<=ma && l && r;
    }
};