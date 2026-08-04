// Last updated: 8/4/2026, 4:37:12 PM
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
14    int di(TreeNode* root,int &ans){
15        if(root == nullptr) return 0;
16
17        int left =  di(root->left,ans);
18        int right =  di(root->right,ans);
19
20        int dia = left + right;
21        ans = max(ans,dia);
22
23        if(left ==0 && right ==0) return 1;
24        return max(left,right)+1;
25
26    }
27    int diameterOfBinaryTree(TreeNode* root) {
28        if(root == nullptr) return 0;
29        int ans = 0;
30        di(root,ans);
31        return ans;
32    }
33};