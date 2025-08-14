// Last updated: 8/14/2025, 5:15:00 PM
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
    int bal(TreeNode* root){
        if(!root) return 0;
        int left = bal(root->left);
        int right = bal(root->right);

        if(left == -1 || right == -1) return -1;
        if(abs(left-right)>1) return -1;

        return max(left,right)+1;

    }
    bool isBalanced(TreeNode* root) {
        return bal(root) == -1 ? false : true;
    }
};