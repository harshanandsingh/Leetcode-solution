// Last updated: 7/31/2026, 12:02:08 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    void invert(TreeNode* root){
15        if(root == nullptr ) return ;
16        TreeNode* temp = root->left;
17        root->left = root->right;
18        root->right = temp;
19        invert(root->left);
20        invert(root->right);
21    }
22    TreeNode* invertTree(TreeNode* root) {
23        if(root == nullptr) return nullptr;
24        invert(root);
25        return root;
26    }
27};