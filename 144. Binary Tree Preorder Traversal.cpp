/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    void pot(TreeNode* node)
    {
        if(!node)
            return;
        ans.push_back(node->val);
        pot(node->left);
        pot(node->right);
    }
    vector<int> preorderTraversal(TreeNode* root) 
    {
        pot(root);
        return ans;    
    }
};
