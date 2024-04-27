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
        return BinarySearchTree(nums, 0, nums.size()-1);
    }
    
    TreeNode* BinarySearchTree(vector<int>& nums, int start, int end){
        if(start>end) return NULL;
        int mid = (end-start)/2;
        TreeNode* node=new TreeNode(mid);
        node->left=BinarySearchTree(nums, start, mid-1);
        node->right=BinarySearchTree(nums,mid+1,end);
        return node;
    }
    
};