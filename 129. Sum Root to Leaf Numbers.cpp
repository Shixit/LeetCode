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
class Solution 
{
    void recursion(TreeNode *root, int val)
    {   if(!root)
            return;
        val = (val*10) + root->val;
        if(!root->left && !root->right)
            ans += val;
        recursion(root->left,val);
        recursion(root->right,val);
    }
public:
    long long ans = 0;
    int sumNumbers(TreeNode* root) 
    {
            if(!root)
                return 0;
            recursion(root,0);
            return ans;
    }
};
