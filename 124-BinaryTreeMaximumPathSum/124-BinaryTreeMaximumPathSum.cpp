// Last updated: 11/15/2025, 4:15:33 PM
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
    int max_val = INT_MIN;
    int solve(TreeNode* root){
        if(!root) return 0;

        int left = max(0,solve(root->left));
        int right = max(0,solve(root->right));

        //left,right,root->val+left,root->val+right
        max_val = max({max_val,root->val+left+right});
        return max({left+root->val,right+root->val});

    }
    int maxPathSum(TreeNode* root) {
        // we can solve this using post order traversal 
        solve(root);
        return max_val;
        
    }
};