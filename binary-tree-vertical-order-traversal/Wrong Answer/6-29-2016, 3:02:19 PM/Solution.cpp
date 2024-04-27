// https://leetcode.com/problems/binary-tree-vertical-order-traversal

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
    map<int, vector<int>> mymap;
    vector<vector<int>> verticalOrder(TreeNode* root) {
        vector<vector<int>> res;
        dfs(root, 0);
        for(auto col : mymap){
            res.push_back(col.second);
        }
        return res;
    }
    void dfs(TreeNode* node, int col){
        if(node==NULL) return;
        mymap[col].push_back(node->val);
        dfs(node->left, col-1);
        dfs(node->right, col+1);
    }
};