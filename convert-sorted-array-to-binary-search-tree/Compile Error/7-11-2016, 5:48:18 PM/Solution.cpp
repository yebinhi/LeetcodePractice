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
        int n=nums.size();
        if(n<=0) return NULL;
        return dfs(nums,0, n-1);
    }
    
    TreeNode* dfs(vector<int>& nums, int s, int e){
        if(s>e) return NULL;
        int mid=(s+e)/2;
        TreeNode* root=TreeNode(nums[mid]);
        root->left=dfs(s, mid-1);
        root->right=dfs(mid+1, e);
        return root;
        
    }
};