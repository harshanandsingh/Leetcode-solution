// Last updated: 11/18/2025, 12:13:43 PM
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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root || root->val == val) return root;
        TreeNode *left=nullptr,*right=nullptr;
        if(root->val >= val) left = searchBST(root->left,val);
        if(root->val < val) right = searchBST(root->right,val);

        return left!=nullptr ? left:right;
    }
};