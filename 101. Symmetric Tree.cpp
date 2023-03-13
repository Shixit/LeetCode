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
    bool Symmetric(TreeNode *lst, TreeNode *rst)
    {
        if(lst==NULL && rst==NULL) return true;
        else if(lst==NULL || rst==NULL) return false;
        else if(lst->val != rst->val) return false;
        return Symmetric(lst->left,rst->right) && Symmetric(lst->right,rst->left);
    }
    bool isSymmetric(TreeNode* root) 
    {
        if(!root || root->left==NULL && root->right==NULL) return true;
        return Symmetric(root->left , root->right);
    }
};
