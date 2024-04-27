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
     ListNode* list = NULL;
    TreeNode* sortedListToBST(ListNode* head) {
        int n=0;
        ListNode* p = head;
        while(p != NULL){
            n++;
            p=p->next;
        }
        list=head;
        return buildTree(0, n-1);
    }
    TreeNode* buildTree(int start, int end){
        if(start > end) return NULL;
        int mid = (start+end)/2;
        TreeNode* left = buildTree(start, mid-1);
        TreeNode* parent = new TreeNode(list->val);
        parent->left=left;
        TreeNode* right = buildTree(mid+1, end);
        parent->right=right;
        return parent;
        
    }
};