// Last updated: 11/15/2025, 3:09:00 PM
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
    bool dfs1(TreeNode* root, int t_sum,int sum ){
        if(!root) return false;

        sum+=root->val;
        if(!root->left && !root->right) return sum==t_sum;

        return ((dfs1(root->left,t_sum,sum)) || (dfs1(root->right,t_sum,sum)) );

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        // if(!root) return false;
        return  dfs1(root,targetSum,0);
    }





















    //bool present = false;
    bool dfs(TreeNode* root, int targetSum,int sum){
        // if(!root || present) return;
        if(!root) return false;

        sum = sum  + root->val;
        // if(!root->left && !root->right && cur_sum == targetSum) return true;
        // else if(!root->left && !root->right && cur_sum != targetSum) return false;
        if(!root->left && !root->right) return sum == targetSum;

        return dfs(root->left,targetSum,sum) || dfs(root->right,targetSum,sum);
    }
    // void dfs(TreeNode* root, int targetSum,int sum){
    //     if(!root || present) return;

    //     int cur_sum = sum  + root->val;
    //     if(!root->left && !root->right && cur_sum == targetSum) present=true;

    //     dfs(root->left,targetSum,cur_sum);
    //     dfs(root->right,targetSum,cur_sum);
    // }
    bool hasPathSum1(TreeNode* root, int targetSum) {
       return dfs(root,targetSum,0); // root , target , current sum 
       //return present;
    }
};