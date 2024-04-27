// https://leetcode.com/problems/balanced-binary-tree

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
    bool isBalanced(TreeNode* root) {
        return dfs(root)!=-1;
    }
    int dfs(TreeNode* node){
        if(!node) return 0;
        
        int left=dfs(node->left);
        if(left==-1) return -1;
        int right=dfs(node->right);
        if(right==-1) return -1;
        if(bas(left-right)>1) return -1;
        return max(left, right)+1;
    }
};