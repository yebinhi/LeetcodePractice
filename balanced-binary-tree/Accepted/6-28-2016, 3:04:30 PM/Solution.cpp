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
        return maxDepth(root) != -1;
    }
    int maxDepth(TreeNode* n){
        if(n==NULL) return 0;
        int l=maxDepth(n->left);
        if(l==-1) return -1;
        int r=maxDepth(n->right);
        if(r==-1) return -1;
        return abs(l-r) >1 ? -1 : max(l, r)+1;
    }
};