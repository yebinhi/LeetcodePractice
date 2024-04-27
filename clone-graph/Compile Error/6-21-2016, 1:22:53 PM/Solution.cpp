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
        return DFS(node, mymap);
    }
    UndirectedGraphNode* DFS(UndirectedGraphNode* node, map<UndirectedGraphNode*, UndirectedGraphNode*> mymap){
        if(mymap.find(node) != mymap.end()) return mymap[node];
        
        UndirectedGraphNode* nodecopy = new UndirectedGraphNode(node->label);
        mymap[node]= nodecopy;
        
        for(auto x : node->neighbors){
            nodecopy->neighbors.push_back(DFS(*x, mymap));
        }
        return nodecopy;
    }
};