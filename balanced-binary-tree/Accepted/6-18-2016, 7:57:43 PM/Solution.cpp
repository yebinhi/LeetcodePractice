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
        return isSubTreeBalanced(root) != -1;
    }
    int isSubTreeBalanced(TreeNode* node){
        if(node == NULL) return 0;
        int l = isSubTreeBalanced(node->left);
        if(l==-1) return -1;
        int r = isSubTreeBalanced(node->right);
        if(r == -1) return -1;
        return abs(l-r)<=1 ? max(l,r)+1 : -1;
    }
};