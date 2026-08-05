// Last updated: 8/5/2026, 10:01:16 AM
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
14    bool dfs1(TreeNode* root, int t_sum,int sum ){
15        if(!root) return false;
16
17        sum+=root->val;
18        if(!root->left && !root->right) return sum==t_sum;
19
20        return ((dfs1(root->left,t_sum,sum)) || (dfs1(root->right,t_sum,sum)) );
21
22    }
23    bool hasPathSum(TreeNode* root, int targetSum) {
24        // if(!root) return false;
25        return  dfs1(root,targetSum,0);
26    }
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48    //bool present = false;
49    bool dfs(TreeNode* root, int targetSum,int sum){
50        // if(!root || present) return;
51        if(!root) return false;
52
53        sum = sum  + root->val;
54        // if(!root->left && !root->right && cur_sum == targetSum) return true;
55        // else if(!root->left && !root->right && cur_sum != targetSum) return false;
56        if(!root->left && !root->right) return sum == targetSum;
57
58        return dfs(root->left,targetSum,sum) || dfs(root->right,targetSum,sum);
59    }
60    // void dfs(TreeNode* root, int targetSum,int sum){
61    //     if(!root || present) return;
62
63    //     int cur_sum = sum  + root->val;
64    //     if(!root->left && !root->right && cur_sum == targetSum) present=true;
65
66    //     dfs(root->left,targetSum,cur_sum);
67    //     dfs(root->right,targetSum,cur_sum);
68    // }
69    bool hasPathSum1(TreeNode* root, int targetSum) {
70       return dfs(root,targetSum,0); // root , target , current sum 
71       //return present;
72    }
73};