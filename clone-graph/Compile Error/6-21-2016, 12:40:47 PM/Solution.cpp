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
        map<UndirectedGraphNode*, UndirectedGraphNode*> mymap;
        return DFS(node, mymap);
    }
    UndirectedGraphNode* DFS(UndirectedGraphNode* node, map<UndirectedGraphNode*, UndirectedGraphNode*> mymap){
        if(node == NULL) return node;
        
        UndirectedGraphNode* nodecopy = node;
        mymap[node]=nodecopy;
        for(auto x : node->neighbors){
            if(mymap[x] != mymap.end()){
            nodecopy->neighbors.push_back(mymap[x]);
            }else{
                nodecopy->neighbors.push_back(DFS(x, mymap));
            }
        }
        return nodecopy;
    }
};