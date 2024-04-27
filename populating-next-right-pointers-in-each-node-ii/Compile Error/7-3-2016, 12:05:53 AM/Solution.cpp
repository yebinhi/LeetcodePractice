// https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(!root) return;
        TreeLinkNode* rightMost=root;
        queue<TreeLinkNode*> q, *prev=NULL;
        q.push(root);
        while(!q.empty()){
            TreeNode* node=q.top(); q.pop();
            if(prev) prev->next=node;
            if(node == rightMost) node->next=NULL;
            prev=node;
            q.push(node->left);
            q.push(node->right);
        }
    }
};