// https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
       for (TreeLinkNode head = root; head != null; ) {
        TreeLinkNode nextHead = new TreeLinkNode(0), nextTail = nextHead;
        for (TreeLinkNode node = head; node != null; node = node.next) {
            if (node.left != null) {
                nextTail.next = node.left;
                nextTail = node.left;
            }
            if (node.right != null) {
                nextTail.next = node.right;
                nextTail = node.right;
            }
        }
        head = nextHead.next;
    }
        
    }
};