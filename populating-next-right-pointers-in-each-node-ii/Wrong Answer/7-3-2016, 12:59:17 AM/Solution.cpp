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
        TreeLinkNode* rightMost=root, *prev=NULL;
        queue<TreeLinkNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeLinkNode* node = q.front(); q.pop();
            if(prev != NULL && prev != rightMost && node != rightMost){
                prev->next=node;
            }else if(node==rightMost){
                node->next=NULL;
                rightMost=(node->right==NULL)?node->left:node->right;
            }
            prev=node;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
    }
};