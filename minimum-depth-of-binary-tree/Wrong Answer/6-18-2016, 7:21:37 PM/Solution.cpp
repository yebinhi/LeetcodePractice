// https://leetcode.com/problems/minimum-depth-of-binary-tree

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
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        
        queue<TreeNode*> q;
        TreeNode* rightMost=root;
        q.push(root);
        int depth =0;
        while(!q.empty()){
            TreeNode *node = q.front();
            q.pop();
            if(node->left == NULL && node->right == NULL) break;
            if(node->left != 0) q.push(node->left);
            if(node->right != 0) q.push(node->right);
            if(node == rightMost){
                depth++;
                if(node->right != NULL){
                    rightMost=node->right;
                }else if(node->left != NULL){
                    rightMost = node->left;
                }
                
            }
        }
        return depth;
    }
};