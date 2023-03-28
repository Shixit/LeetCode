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
    int count=0;
    void traversal(TreeNode* node)
    {
        if(!node)
            return;
        traversal(node->left);
        traversal(node->right);
            count++;
    }
    int countNodes(TreeNode* root) 
    {
            traversal(root);
            return count;
    }
};
