// Last updated: 8/5/2026, 8:57:01 AM
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
    // what do you mean by "the merging process must start from the root nodes of both trees"?
    TreeNode* merge(TreeNode* node1, TreeNode* node2) {
        if (!node1 && !node2) return nullptr;
        if (node1 && !node2) return node1;
        if (!node1 && node2) return node2;

        TreeNode* root = new TreeNode(node1->val + node2->val);
        root->left = merge(node1->left, node2->left);
        root->right = merge(node1->right, node2->right);
        return root;
    }

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return merge(root1, root2);
    }
};