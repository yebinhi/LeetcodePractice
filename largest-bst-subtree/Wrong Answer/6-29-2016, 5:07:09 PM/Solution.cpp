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
    int maxNum=0;
    int largestBSTSubtree(TreeNode* root) {
        return getSize(root);
    }
    int getSize(TreeNode* node){
        if(!node) return 0;
        int l=getSize(node->left);
        int r=getSize(node->right);
        if(maxNum<(l+r)) maxNum=l+r;
        return max(l, r)+1;
    }
};