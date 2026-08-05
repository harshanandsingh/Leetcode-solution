// Last updated: 8/5/2026, 10:18:40 AM
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
14    int sum=0;
15    void bst(TreeNode* root, int low, int high){
16        if(!root) return ;
17        if(root->val >= low && root->val <=high) sum+=root->val;
18        if(root->val >=low) bst(root->left,low,high);
19        if(root->val <=high) bst(root->right,low,high);
20    }
21    int rangeSumBST(TreeNode* root, int low, int high) {
22        if(!root) return 0;
23        
24        bst(root,low,high);
25        return sum;
26    }
27};