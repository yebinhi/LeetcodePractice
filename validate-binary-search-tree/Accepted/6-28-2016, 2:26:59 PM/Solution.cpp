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
    TreeNode *prev; 
    bool isValidBST(TreeNode* root) {
        prev=NULL;
        return valid(root);
    }
    bool valid(TreeNode* n){
       if(n==NULL) return true;
       if(valid(n->left)){
           if(prev != NULL && n->val <= prev->val) return false;
           prev=n;
           return valid(n->right);
       }
       return false;
    }
};