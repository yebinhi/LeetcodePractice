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
        if(root == NULL) return root;
        
        TreeNode* p = root, *parent=NULL, *parentRight=NULL;
        while(p != NULL){
            TreeNode* left = p->left;
            p->left=parentRight;
            parentRight=p->right;
            p->right=p;
            parent=p;
        }
        return parent;
    }
};