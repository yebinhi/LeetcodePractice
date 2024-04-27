// https://leetcode.com/problems/minimum-depth-of-binary-tree

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
    int minDepth(TreeNode* root) {
        
    }
    int minDepthHelper(TreeNode* node){
        if(node == NULL) return 0;
        if(node->right == NULL) return minDepthHelper(node->left);
        if(node->left == NULL) return minDepthHelper(node->right);
        return min(minDepthHelper(node->left)+minDepthHelper(node->right)+1;
    }
};