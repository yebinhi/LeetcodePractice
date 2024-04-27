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
        RandomListNode* dummy= new RandomListNode(0), *dcy=dummy, *hcy=head;
        map<RandomListNode*, RandomListNode*> mymap;
        while(hcy){
            RandomListNode* node=new RandomListNode(hcy->label);
            dcy->next=node;
            mymap[hcy]=node;
            hcy=hcy->next;
            dcy=dcy->next;
        }
        dcy=dummy;
        hcy=head;
        while(hcy){
            dcy->next->random=map[hcy->random];
            dcy=dcy->next;
            hcy=hcy->next;
        }
        return dummy->next;
    }
};