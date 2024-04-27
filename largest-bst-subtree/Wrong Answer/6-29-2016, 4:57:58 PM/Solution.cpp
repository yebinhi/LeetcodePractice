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
        if(root==NULL) return 0;
        if(!root->left || !root->right ) 
            return max(getSize(root->left), getSize(root->right))+1; 
        else
            return max(getSize(root->left), getSize(root->right));
        
        
    }
    int getSize(TreeNode* node){
        if(node == NULL) return 0;
        return getSize(node->left)+getSize(node->right)+1;
    }
};