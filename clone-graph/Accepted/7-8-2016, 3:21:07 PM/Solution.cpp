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
        if(!node) return NULL;
        
        map<UndirectedGraphNode*, UndirectedGraphNode*> m;
        queue<UndirectedGraphNode*> q;
        q.push(node);
        UndirectedGraphNode* nodecopy = new UndirectedGraphNode(node->label);
        m[node]=nodecopy;
        while(!q.empty()){
            UndirectedGraphNode * cur=q.front(); q.pop();
            for(auto nei : cur->neighbors){
                if(m.find(nei) != m.end()){
                    m[cur]->neighbors.push_back(m[nei]);
                }else{
                    UndirectedGraphNode * neicopy= new UndirectedGraphNode(nei->label);
                    m[cur]->neighbors.push_back(neicopy);
                    m[nei]=neicopy;
                    q.push(nei);
                }
            }
        }
        return nodecopy;
    }
};