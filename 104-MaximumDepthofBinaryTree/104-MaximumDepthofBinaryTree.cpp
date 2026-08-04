// Last updated: 8/4/2026, 4:00:06 PM
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
14    int maxDepth(TreeNode* root) {
15        if(root == nullptr) return 0; // base case 
16
17        int left = 0;
18        left = maxDepth(root->left);
19        int right = 0;
20        right = maxDepth(root->right);
21        return max(left,right) + 1;
22    }
23}; 