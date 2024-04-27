// https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL) return NULL;
        int n=0;
        TreeNode node= head;
        while(node != NULL){
            n++;
            node=node->next;
        }
        return helper(head, n);
    }
    TreeNode* helper(ListNode* head, int start, int len){
        if(start>len) return NULL;
        int mid=(start+len)/2;
        TreeNode* leftC=helper(head->left, start,mid-1);
        TreeNode* parent= new TreeNode(head->val);
        TreeNode* rightC=helper(head->right, mid+1, len);
        parent.left=leftC;
        parent.right=rightC;
        head=head->next;
    }
};