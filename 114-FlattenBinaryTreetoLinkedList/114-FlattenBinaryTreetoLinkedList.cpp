// Last updated: 8/14/2025, 7:00:11 PM
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
    TreeNode* previous=nullptr;
    void flatten(TreeNode* root) {
        if(!root) return ;

        // we have to reverese out approch -> start form the bottom were we dont cant loose anything 
        flatten(root->right);
        flatten(root->left);

        root->right = previous;
        root->left = nullptr;
        previous=root;
    }
};