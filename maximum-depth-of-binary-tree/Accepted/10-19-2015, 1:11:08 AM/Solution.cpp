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
        count =1;
        q.push(root);
        TreeNode* t;
        while(!q.empty()){
            level++;
            int tcount(0);
            for(int i=0; i<count; ++i){
                t = q.front();
                q.pop();
                if(t->left != NULL){ q.push(t->left); tcount++;}
                if(t->right !=NULL){ q.push(t->right); tcount++;}
            }
            count = tcount;
        }
        return level;
    }
};