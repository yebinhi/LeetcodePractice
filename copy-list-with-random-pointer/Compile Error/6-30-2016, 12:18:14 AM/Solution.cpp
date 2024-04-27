// https://leetcode.com/problems/copy-list-with-random-pointer

/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(!head) return head;
        
        map<RandomListNode*, RandomListNode*> mymap;
        RandomListNode* dummy = new RandomListNode(0), *dumcopy= dummy, *headcopy=head;
        while(headcopy){
            dumcopy->next= new RandomListNode(headcopy->label);
            mymap[headcopy]=dumcopy;
            dumcopy=dumcopy->next;
            headcopy=headcopy->next;
        }
        dumcopy=dummy;
        headcopy=head;
        while(headcopy){
            dumcopy->next->RandomListNode=mymap[headcopy];
            dumcopy=dumcopy->next;
            headcopy=headcopy->next;
        }
        return dummy->next;
    }
};