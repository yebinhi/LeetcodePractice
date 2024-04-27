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
        return dfs(root, NULL);
    }
    TreeNode* dfs(TreeNode* node, TreeNode* parent){
        if(!node) return parent;
        
        TreeNode* root=dfs(node->left, node);
        node->left=(parent==NULL)?parent:parent->right;
        node->right=parent;
        
        return root;
    }
};