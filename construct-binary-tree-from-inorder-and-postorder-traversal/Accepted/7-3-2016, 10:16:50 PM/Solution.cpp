// https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal

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
    typedef vector<int>::iterator Iter;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return buildTreeRecur(inorder.begin(), inorder.end(), postorder.begin(), postorder.end());
    }
    
    TreeNode* buildTreeRecur(Iter istart, Iter iend, Iter pstart, Iter pend){
        
        if(istart == iend) return NULL;
        int rootval=*(pend-1);
        Iter iterroot=find(istart, iend, rootval);
        TreeNode *res= new TreeNode(rootval);
        res->left=buildTreeRecur(istart, iterroot, pstart, pstart+(iterroot-istart));
        res->right=buildTreeRecur(iterroot+1, iend, pstart+(iterroot-istart), pend-1);
        return res;
    }
};