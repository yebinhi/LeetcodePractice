// https://leetcode.com/problems/clone-graph

/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        if(node == NULL) return NULL;
        
        map<UndirectedGraphNode*, UndirectedGraphNode*> mymap;
        queue<UndirectedGraphNode*> myqueue;
        UndirectedGraphNode* nodecopy = new UndirectedGraphNode(node->label);
        mymap[node]=nodecopy;
        myqueue.push(node);
        while(!myqueue.empty()){
            UndirectedGraphNode* n = myqueue.front();
            myqueue.pop();
            for(auto x : n->neighbors){
                if(mymap.find(x) != mymap.end()){
                    mymap[n]->neighbors.push_back(mymap[x]);
                }else{
                    UndirectedGraphNode* newneighbor = new UndirectedGraphNode(x->label);
                    mymap[n]->neighbors.push_back(newneighbor);
                    mymap[x]=newneighbor;
                    myqueue.push(x);
                }
            }
            
        }
        return nodecopy;
    }
};