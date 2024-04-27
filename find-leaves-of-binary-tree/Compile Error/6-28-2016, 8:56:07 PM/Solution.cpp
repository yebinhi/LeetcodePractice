// https://leetcode.com/problems/find-leaves-of-binary-tree

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
    vector<vector<int>> findLeaves(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL) return res;
        bottomUp(root, res);
    }
    int bottomUp(TreeNode* node, vector<vector<int>> res){
        if(node == NULL) return 0;
        
        int idl=bottomUp(node->left, res);
        int idr=bottomUp(node->right, res);
        
        res[idl].push_back(node->val);
    }
};