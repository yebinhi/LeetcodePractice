// https://leetcode.com/problems/maximum-depth-of-binary-tree

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
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        queue<TreeNode*> q;
        int level(0), count(0);
        q.push(root);
        count=1;
        TreeNode* tmp;
        while(!q.empty()){
            level++;
            int tcount(0);
            for(int i=0; i<count; i++){
                tmp = q.front(); q.pop();
                if(tmp->left != NULL){ q.push(tmp->left); tcount++;}
                if(tmp->right != NULL){ q.push(tmp->right); tcount++;}
            }
            count = tcount;
        }
        return level;
    }
};