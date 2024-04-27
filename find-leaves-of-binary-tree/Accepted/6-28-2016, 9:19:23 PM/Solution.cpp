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
        bottomUp(root, res);
        return res;
    }
    int bottomUp(TreeNode* node, vector<vector<int>>& res){
        if(node == NULL) return 0;
        
        int idl=bottomUp(node->left, res);
        int idr=bottomUp(node->right, res);
        int id=max(idl, idr);
        if(id == res.size()) res.push_back({});
        res[id].push_back(node->val);
        return id+1;
    }
};