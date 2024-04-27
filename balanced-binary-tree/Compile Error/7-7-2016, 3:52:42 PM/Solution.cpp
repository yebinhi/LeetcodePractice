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
        int i=maxDepth(root);
        return i!=-1;
    }
    int maxDepth(TreeNode* node){
        if(node==NULL) return 0;
        int L= maxDepth(node->left);
        if(L==-1) return -1;
        int R=maxDepth(node->right);
        if(R==-1) return -1;
        
        return abs(L-R) >1 ? -1 : max(L+R)+1;
    }
};