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

    ListNode* list=NULL;
    
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* p = head;
        int d=0;
        while(p != NULL){
            d++;
            p=p->next;
        }
        list=head;
        return buildTree(0,d-1);
    }
    TreeNode* buildTree(int start, int end){
        if(start>end) return NULL;
        int mid=(start+end)/2;
        TreeNode* left = buildTree(start, mid-1);
        TreeNode* parent = new TreeNode(list->val);
        parent->left=left;
        list=list->next;
        TreeNode* right = buildTree(mid+1, end);
        parent->right = right;
        
        return parent;
        
        
        
    }
};