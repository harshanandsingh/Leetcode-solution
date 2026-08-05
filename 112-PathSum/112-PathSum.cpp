// Last updated: 8/5/2026, 10:05:01 AM
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
14        bool check(TreeNode* root, int targetSum,int sum){
15            if(!root ) return false;
16            //else if(!root && sum != targetSum) return false;
17
18            sum += root->val;
19            if(!root->left && !root->right) return sum == targetSum;
20            bool left = check(root->left,targetSum,sum);
21            bool right = check(root->right,targetSum,sum);
22            return left || right;
23        }
24    bool hasPathSum(TreeNode* root, int targetSum) {
25        if(!root ) return false;
26
27        int sum = 0;
28        return check(root,targetSum,sum);
29    }
30};