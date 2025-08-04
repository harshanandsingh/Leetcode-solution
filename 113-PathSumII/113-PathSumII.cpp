// Last updated: 8/4/2025, 9:36:44 AM
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
    vector<vector<int>> res;
    vector<int> path;
    void dfs(TreeNode* node, int targetSum, int curSum) {
        if (!node) return;

        curSum += node->val; // find the current sum 
        path.push_back(node->val); // push the node in the path 

        if (!node->left && !node->right && curSum == targetSum) { // if that node is the leaf node and sum = target push in result
            res.push_back(path);
        }

        // perform -> pre order traversal 
        dfs(node->left, targetSum, curSum);
        dfs(node->right, targetSum, curSum);

        path.pop_back(); // remove the node from the path , so parent dont have me with him 
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum, 0);
        return res;
    }
};