// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree

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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n= nums.size();
        if(n<=0) return NULL;
        return Helper(nums, 0, n-1);
    }
    TreeNode* Helper(vector<int>& nums, int start, int end){
        if(start>end) return NULL;
        int mid=(start+end)/2;
        TreeNode* parent = new TreeNode(nums[mid]);
        TreeNode* leftc=Helper(nums, start, mid);
        TreeNode* rightc = Helper(nums, mid, end);
        parent->left=leftc;
        parent->right=rightc;
        return parent;
        
    }
};