// https://leetcode.com/problems/binary-tree-upside-down

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
    TreeNode* upsideDownBinaryTree(TreeNode* root) {
        return bottomUp(root, NULL);
    }
    TreeNode* bottomUp(TreeNode* p, TreeNode *parent){
        if(p == NULL) return p;
        TreeNode* root = bottomUp(p->left, p);
        p->left = (parent == NULL)? parent : parent->right;
        p->right = parent;
        return root;
    }
};