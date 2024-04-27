// https://leetcode.com/problems/maximum-depth-of-binary-tree

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
    int maxDepth(TreeNode* root) {
        return maxDepthHelper(root);
    }
    int maxDepthHelper(TreeNode* node){
        if(node == NULL) return 0;
        return max(maxDepthHelper(node->left), maxDepthHelper(node->right))+1;
    }
};