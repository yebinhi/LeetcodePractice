// https://leetcode.com/problems/binary-tree-maximum-path-sum

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
    int maxSum=0;
    int maxPathSum(TreeNode* root) {
        maxSum=INT_MIN;
        dfs(root);
        return maxSum;
    }
    int dfs(TreeNode* node){
        if(!node) return 0;
        
        int l=dfs(node->left);
        int r=dfs(node->right);
        maxSum=max(maxSum, l+r+node->val);
        int maxc=max(l, r)+node->val;
        return mmaxc>=0 ? macx : 0; 
    }
};