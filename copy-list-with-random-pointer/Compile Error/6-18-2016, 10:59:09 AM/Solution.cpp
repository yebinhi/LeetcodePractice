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
        
        map<RandomListNode*, RandomListNode*> m;
        RandomListNode* dummy= new RandomListNode(0), *n=dummy, *p=head;
        while(p){
            RandomListNode* node=new RandomListNode(p->label);
            n->next=node;
            m.insert(p, node);
            n=n->next;
            p=p->next;
        }
        
        n=dummy->next;
        p=head;
        while(p){
            n->random=m.find(p->random);
            p=p->next;
            n=n->next;
        }
        return dummy->next;
        
    }
};