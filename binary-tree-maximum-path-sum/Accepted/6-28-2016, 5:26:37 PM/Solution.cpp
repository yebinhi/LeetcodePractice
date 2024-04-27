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
    int maxsum;
    int maxPathSum(TreeNode* root) {
        if(root == NULL) return 0;
        maxsum=INT_MIN;
        maxSum(root);
        return maxsum;
        
    }
    int maxSum(TreeNode*node){
        if(node == NULL) return 0;
        int left=maxSum(node->left);
        int right=maxSum(node->right);
        maxsum=max(node->val+left+right, maxsum);
        int res=node->val + max(left, right);
        return res<0? 0:res;
    }
};