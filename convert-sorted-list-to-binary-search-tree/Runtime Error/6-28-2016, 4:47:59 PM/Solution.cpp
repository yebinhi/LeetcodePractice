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
    ListNode* list;
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL) return NULL;
        int n=0;
        ListNode *node= head;
        while(node != NULL){
            n++;
            node=node->next;
        }
        list=head;
        return helper(0, n);
    }
    TreeNode* helper(int start, int len){
        if(start>len) return NULL;
        int mid=(start+len)/2;
        
        TreeNode* leftC=helper(start,mid-1);
        TreeNode* parent= new TreeNode(list->val);
        parent->left=leftC;
        list=list->next;
        TreeNode* rightC=helper(mid+1, len);
        
        return parent;
    }
};