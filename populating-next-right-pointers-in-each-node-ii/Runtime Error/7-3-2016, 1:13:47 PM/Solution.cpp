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
        
        TreeLinkNode * rightMost=root, *prev=root;
        
        queue<TreeLinkNode*> q;
        q.push(root);
        
        while(prev){
            TreeLinkNode* node = q.front();
            if(prev==rightMost){
                prev->next=NULL;
                rightMost=(prev->right)? prev->right : prev->left;
                prev=node;
            }else{
                prev->next=node;
                q.pop();
                prev=prev->next;
            }
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
    }
};