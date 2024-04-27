// https://leetcode.com/problems/largest-bst-subtree

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
    int largestBSTSubtree(TreeNode* root) {
        int res=0;
        dfs(root, res);
        return res;
    }
    void dfs(TreeNode* node, int &res){
        if(!node) return;
        int d=countBST(node, INT_MIN, INT_MAX);
        if(d!=-1){
            res=max(res, d);
            return;
        }
        
        dfs(node->left, res);
        dfs(node->right, res);
    }
    
    int countBST(TreeNode* node, int min, int max){
        if(!node) return 0;
        if(node->val <min || node->val >max) return -1;
        int left = countBST(node->left, min, node->val);
        if(left == -1) return -1;
        int right=countBST(node->right, node->val, max);
        if(right==-1) return -1;
        return left+right+1;
        
    }
};