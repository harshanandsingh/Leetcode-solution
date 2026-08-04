// Last updated: 8/4/2026, 6:22:45 PM
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
14    bool check(TreeNode* root1, TreeNode* root2){
15        if(!root1 && !root2) return true;
16
17        if((!root1 && root2) || (root1 && !root2)) return false;
18
19        if(root1->val != root2->val) return false;
20
21        return check(root1->left,root2->left) && check(root1->right,root2->right);
22    }
23    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
24        if(!root) return false;
25
26        if(check(root,subRoot)) return true;
27        return isSubtree(root->left,subRoot) ||  isSubtree(root->right,subRoot);
28
29    }
30};