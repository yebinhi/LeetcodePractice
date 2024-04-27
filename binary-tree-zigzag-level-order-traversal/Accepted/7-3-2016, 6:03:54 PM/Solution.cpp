// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        
        stack<TreeNode*> curlevel;
        stack<TreeNode*> nextlevel;
        bool left2right=true;
        curlevel.push(root);
        while(!curlevel.empty()){
            vector<int> subres;
            while(!curlevel.empty()){
                TreeNode* node=curlevel.top(); curlevel.pop();
                subres.push_back(node->val);
                
                if(left2right){
                    if(node->left) nextlevel.push(node->left);
                    if(node->right) nextlevel.push(node->right);
                }else{
                    if(node->right) nextlevel.push(node->right);
                    if(node->left) nextlevel.push(node->left);
                }
            }
            res.push_back(subres);
            stack<TreeNode*> temp=curlevel;
            curlevel=nextlevel;
            nextlevel=temp;
            left2right=!left2right;
        }
        return res;
    }
};