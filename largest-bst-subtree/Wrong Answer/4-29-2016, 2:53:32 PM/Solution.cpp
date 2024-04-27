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
        if(root==NULL)
        return 0;
        return TheSize(root->left)+TheSize(root->right)+1;
    }
    int TheSize(TreeNode* node){
        if(node == NULL){
            return 0;
        }
        
        return TheSize(node->left)+1+TheSize(node->right);
    }
};