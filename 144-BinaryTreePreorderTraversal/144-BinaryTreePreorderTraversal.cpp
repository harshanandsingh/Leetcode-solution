// Last updated: 8/2/2025, 9:54:25 AM
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

    void pre_order(TreeNode* root,vector<int>&r){
        if(root == nullptr) return ;

        r.push_back(root->val);
        if(root->left != nullptr) pre_order(root->left,r);
        if(root->right != nullptr) pre_order(root->right,r);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>r;
        pre_order(root,r);
        return r;
    }
};