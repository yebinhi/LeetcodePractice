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
        ListNode* node=head;
        while(node != NULL){
            n++;
            node=node->next;
        }
        list=head;
        return helper(0, n-1);
    }
    
    TreeNode* helper(int start, int end){
        if(start>end) return NULL;
        int mid= (start+end)/2;
        
        TreeNode* leftc=helper(start, mid-1);
        TreeNode* parent=new TreeNode(list->val);
        parent->left=leftc;
        list=list->next;
        parent->right=helper(mid+1, end);
        
        return parent;
    }
};