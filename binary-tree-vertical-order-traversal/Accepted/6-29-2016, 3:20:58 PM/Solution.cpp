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
    map<int, map<int, vector<int>>> mymap;
    vector<vector<int>> verticalOrder(TreeNode* root) {
        vector<vector<int>> res;
        dfs(root, 0,0);
        for(auto col : mymap){
            res.emplace_back();
            
            for(auto &row : col.second){
                auto vec=row.second;
                copy(vec.begin(), vec.end(), back_inserter(res.back()));
            }
        }
        return res;
    }
    void dfs(TreeNode* node, int col, int row){
        if(node==NULL) return;
        mymap[col][row].push_back(node->val);
        dfs(node->left, col-1, row+1);
        dfs(node->right, col+1, row+1);
    }
};