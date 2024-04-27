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
        map<UndirectedGraphNode*, UndirectedGraphNode*> m;
        return dfs(node, m);
    }
    UndirectedGraphNode* dfs(UndirectedGraphNode* node, map<UndirectedGraphNode*, UndirectedGraphNode*> &m){
        if(m.finf(node) != m.end()) return m[node];
        
        UndirectedGraphNode* nodecopy= new UndirectedGraphNode(node->label);
        m[node]=nodecopy;
        for(auto nei: node->neighbors){
            nodecopy->neighbors.push(dfs(nei, m));
        }
        return nodecopy;
    }
};