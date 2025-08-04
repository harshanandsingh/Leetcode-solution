// Last updated: 8/4/2025, 8:52:31 AM
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
    TreeNode* pruneTree(TreeNode* root) {

        if(root==nullptr) return nullptr; // base case 

        // we have to do bootom up approch -> post order traversal 
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);

        // if( (root->left == nullptr || root->left->val == 0 ) && (root->right == nullptr || root->right->val == 0) && root->val ==0){
        //     return nullptr;
        // }
        // If current node and its children are all 0 (or pruned), prune it
        if (root->left == nullptr && root->right == nullptr && root->val == 0) {
        return nullptr;
    }
        return root;
    }
};