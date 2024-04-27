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
        if(!root) return res;
        queue<pair<int, TreeNode*>> myqueue;
        map<int, vector<int>> mymap;
        myqueue.push({0, root});
        while(!myqueue.empty()){
            auto a=myqueue.front(); myqueue.pop();
            mymap[a.first].push_back(a.second->val);
            if(a.second->left) myqueue.push({a.first-1, a.second->left});
            if(a.second->right) myqueue.push({a.first+1, a.second->right});
        }
        
        for(auto x : mymap){
            res.push_back(x.second);
        }
        return res;
        
    }
};