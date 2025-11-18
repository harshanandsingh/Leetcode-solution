// Last updated: 11/18/2025, 12:56:21 PM
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
    bool solve(TreeNode* root,long long min_val, long long max_val){
        if(!root ) return true;

        // mistake which i have done 
        //if((root->left && root->val <= root->left->val) || (root->right && root->val >= root->right->val)) return false;
        if(root->val <= min_val || root->val>= max_val) return false;
        
        
        return solve(root->left,min_val,root->val) && solve(root->right,root->val,max_val);
    }
    bool isValidBST(TreeNode* root) {
        // return solve(root,INT_MIN,INT_MAX);
        return solve(root, LLONG_MIN, LLONG_MAX);
    }
};