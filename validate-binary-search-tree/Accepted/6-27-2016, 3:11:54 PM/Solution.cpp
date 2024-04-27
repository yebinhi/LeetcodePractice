// https://leetcode.com/problems/validate-binary-search-tree

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
    TreeNode* prev;


    bool isValidBST(TreeNode* root) {
        return valid(root);
    }
    
    
    bool valid(TreeNode* node){
        if(node == NULL) return true;
        if(valid(node->left)){
            if(prev != NULL && node->val <= prev->val) return false;
            prev=node;
            return valid(node->right);
        }
        return false;
    }
};