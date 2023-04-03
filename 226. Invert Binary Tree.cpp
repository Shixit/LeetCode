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
    // void mirror(TreeNode* node)
    // {
    //      if(node == NULL)
    //         return;
    //     TreeNode* temp;
    //     temp= node->left;
    //     node->left = node->right;
    //     node->right = temp;

    //     mirror(node->left);
    //     mirror(node->right);    
     
    // }
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root == NULL)
            return NULL;

        TreeNode* temp;
        temp= root->left;
        root->left = root->right;
        root->right = temp;

        invertTree(root->left);
        invertTree(root->right);  
        return root;
    }
};
