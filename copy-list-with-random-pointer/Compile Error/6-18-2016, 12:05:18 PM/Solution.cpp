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
        
        RandomListNode *dummy=new RandomListNode(0), *p=head;
        dummy->next=head;
        while(p){
            RandomListNode* next=p->next;
            RandomListNode* node = new RandomListNode(p->label);
            p->next=node;
            node->next=next;
            p=next;
        }
        p=head;
        while(p){
            p->next->random=(p->random == NULL):NULL ? p->random->next;
            p=p->next->next;
        }
        p=head;
        dummy=p->next;
        while(p != NULL){
            RandListNode copy=p->next;
            p->next=copy.next;
            p=p->next;
            copy->next=(p->next != NULL) ? p->next:NULL
        }
        return dummy;
    }
};