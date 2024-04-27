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
        unordered_map<UndirectedGraphNode*, UndirectedGraphNode*> map;
        map[node] = new UndirectedGraphNode(node->label);
        queue<UndirectedGraphNode*> q;
        q.push(node);
        while(!q.empty()){
            UndirectedGraphNode* temp = q.front();
            q.pop();
            for(int i=0; i<temp->neighbors.size(); i++){
                if(map.find(temp->neighbors[i]) == map.end()){
                    map[temp->neighbors[i]]=new UndirectedGraphNode(temp->neighbors[i]->label);
                    q.push(temp->neighbors[i]);
                }
                (map[temp]->neighbors).push_back(map[temp->neighbors[i]]);
            }
        }
        return map[node];
    }
};