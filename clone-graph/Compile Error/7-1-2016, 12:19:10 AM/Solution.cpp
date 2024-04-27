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
        if(!node) return node;
        map<UndirectedGraphNode*, UndirectedGraphNode*> m;
        return dfs(node, m);
    }
    UndirectedGraphNode* dfs(UndirectedGraphNode* n, map<UndirectedGraphNode*, UndirectedGraphNode*> &m){
        if(m.find(n)) return m[n];
        UndirectedGraphNode* ncpy = new UndirectedGraphNode(n->label);
        for(auto nb : n->neighbors){
            ncpy->neighbors.push_back(nb);
            m[nb]=ncpy;
        }
        return ncpy;
    }
};