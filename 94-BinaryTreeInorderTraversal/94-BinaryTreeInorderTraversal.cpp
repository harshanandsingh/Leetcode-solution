// Last updated: 8/2/2025, 9:50:36 AM
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
    void level_order(TreeNode* root,vector<int>&r){
        if(root == nullptr) return ;

        if(root->left != nullptr) level_order(root->left,r);
        r.push_back(root->val);
        if(root->right != nullptr) level_order(root->right,r);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>r;
        level_order(root,r);
        return r;
    }
};