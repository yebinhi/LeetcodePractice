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
        
        TreeLinNode* head = new TreeLinkNode(0), *curr=head;
        while(root){
            head->next=NULL
            curr=head;
            while(root){
                if(root->left){
                    curr->next=root->left;
                    curr=curr->next;
                }
                if(root->right){
                    curr->next=root->right;
                    curr=curr->next;
                }
                root=root->next;
            }
            root=head->next;
        }
    }
};