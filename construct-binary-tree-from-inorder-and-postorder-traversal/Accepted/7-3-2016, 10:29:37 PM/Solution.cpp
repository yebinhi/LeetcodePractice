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
    typedef vector<int>::iterator iter;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return buildTree(inorder.begin(), inorder.end(), 
                         postorder.begin(), postorder.end());
    }
    TreeNode* buildTree(iter is, iter ie, iter ps, iter pe){
        if(is>=ie) return NULL;
        int rootval=*(pe-1);
        iter iterroot = find(is, ie, rootval);
        TreeNode* res=new TreeNode(rootval);
        res->left=buildTree(is, iterroot, ps, ps+(iterroot-is));
        res->right=buildTree(iterroot+1, ie, ps+(iterroot-is), pe-1);
        return res;
    }
};