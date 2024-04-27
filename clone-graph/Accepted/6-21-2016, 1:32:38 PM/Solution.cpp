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
        map<int,UndirectedGraphNode*> visitTable;
        return clone(node,visitTable);
    }
    UndirectedGraphNode* clone(UndirectedGraphNode* node, map<int,UndirectedGraphNode*> &table){

            
        if(table.find(node->label)!=table.end()) return table[node->label];
        
        UndirectedGraphNode *newnode=new UndirectedGraphNode(node->label);
        table[newnode->label]=newnode;

        for(int i=0;i<node->neighbors.size();i++)
        {
            UndirectedGraphNode *neighbor=clone(node->neighbors[i],table);
            newnode->neighbors.push_back(neighbor);
        }
        
        return newnode;
    }
};