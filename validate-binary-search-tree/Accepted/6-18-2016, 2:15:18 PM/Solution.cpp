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
        prev==NULL;
        return isMonotonicIncreasing(root);
    }
    bool isMonotonicIncreasing(TreeNode* node){
        if(node == NULL) return true;
        
        if(isMonotonicIncreasing(node->left)){
            if(prev != NULL && node->val <= prev->val) return false;
            prev=node;
            return isMonotonicIncreasing(node->right);
        }
        
        return false;
        
    }
};