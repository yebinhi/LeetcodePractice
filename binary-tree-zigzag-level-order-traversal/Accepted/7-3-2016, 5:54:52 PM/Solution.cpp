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
        
        stack<TreeNode*> *currlevel = new stack<TreeNode*>();
        stack<TreeNode*> *nextlevel = new stack<TreeNode*>();
        bool left2right=true;
        currlevel->push(root);
        
        while(!currlevel->empty()){
            vector<int> vals;
            while(!currlevel->empty()){
                TreeNode* curr=currlevel->top(); currlevel->pop();
                vals.push_back(curr->val);
                
                if(left2right){
                    if(curr->left) nextlevel->push(curr->left);
                    if(curr->right) nextlevel->push(curr->right);
                }else{
                    if(curr->right) nextlevel->push(curr->right);
                    if(curr->left) nextlevel->push(curr->left);
                }
            }
            res.push_back(vals);
            stack<TreeNode*> *temp = currlevel;
            currlevel=nextlevel;
            nextlevel=temp;
            left2right= !left2right;
        }
        return res;
    }
};