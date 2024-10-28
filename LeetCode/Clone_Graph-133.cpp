/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
Node* clone(Node* node, unordered_map<int,Node*>& vis) {
    if (!node) return nullptr; 
    
    if (vis.find(node->val) != vis.end())
        return vis[node->val];
    
    Node* new_node = new Node(node->val);
    vis[node->val] = new_node;
    
    for (Node* n : node->neighbors) {
        new_node->neighbors.push_back(clone(n, vis));
    }
    
    return new_node;
}

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == NULL) return NULL;
        unordered_map<int, Node*> vis;
        return clone(node, vis);
    }
};
