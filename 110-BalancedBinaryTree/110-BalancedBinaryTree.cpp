// Last updated: 8/4/2026, 4:55:41 PM
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
14    bool ans = true;
15    int h(TreeNode* root){
16        if(root == nullptr) return 0;
17        int left = h(root->left);
18        int right = h(root->right);
19        if(abs(left - right) >1) ans = false;
20        return max(left,right)+1;
21    }
22    bool isBalanced(TreeNode* root) {
23        if(root == nullptr) return true;
24        h(root);
25        return ans;
26    }
27};