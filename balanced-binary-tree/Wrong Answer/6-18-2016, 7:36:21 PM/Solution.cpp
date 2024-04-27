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
        if(root==NULL) return true;
        int left = subTreeLength(root->left);
        int right = subTreeLength(root->right);
        return abs(left-right)<=1;
    }
    int subTreeLength(TreeNode* node){
        if(node == NULL) return 0;
        
        return max(subTreeLength(node->left), subTreeLength(node->right))+1;
    }
};