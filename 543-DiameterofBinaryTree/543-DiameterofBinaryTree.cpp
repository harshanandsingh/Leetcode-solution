// Last updated: 11/19/2025, 12:08:45 PM
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
    int result = 0;
    int dfs(TreeNode* root){
        if(!root) return 0;

        int left = dfs(root->left);
        int right = dfs(root->right);

        result = max(left+right , result);

        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return result;
    }
};