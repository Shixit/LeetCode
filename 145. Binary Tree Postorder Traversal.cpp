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
        pot(node->left);
        pot(node->right);
        ans.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) 
    {
        pot(root);
        return ans;    
    }
};
