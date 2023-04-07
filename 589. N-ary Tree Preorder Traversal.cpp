/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> op;
    void traversal(Node* x)
    {
        if(x == NULL)
            return;

        op.push_back(x->val);
        for(auto i: x->children)
            traversal(i);
    }
    vector<int> preorder(Node* root) 
    {
        traversal(root);
        return op; 
    }
};
