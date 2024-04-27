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
        return findDepth(root)==-1?false:true;
    }
    int findDepth(TreeNode* node){
        if(!node) return 0;
        int L = findDepth(node->left);
        if(L==-1){
            return -1;
        }
        int R = findDepth(node->right);
        if(R==-1){
            return -1;
        }
        if(abs(L-R)>1) return -1;
        return max(L, R)+1;
    }
};