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
    vector<vector<int>> verticalOrder(TreeNode* root) {
        vector<vector<int>> res;
        map<int, vector<int>> mymap;
        dfs(root, 0, mymap);
        for(auto col : mymap){
            res.push_back(col.second);
        }
        return res;
    }
    void dfs(TreeNode* node, int col, map<int, vector<int>> &mymap){
        if(node==NULL) return;
        mymap[col].push_back(node->val);
        dfs(node->left, col-1, mymap);
        dfs(node->right, col+1, mymap);
    }
};