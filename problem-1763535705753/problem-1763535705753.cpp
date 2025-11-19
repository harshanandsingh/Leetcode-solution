// Last updated: 11/19/2025, 12:31:45 PM
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
    int countNodes(TreeNode* root){
        if(!root) return 0;

        queue<TreeNode*>q;
        q.push(root);
        int count = 0;
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(!temp) break;
            else count++;

            q.push(temp->left);
            q.push(temp->right);
        }
        return count;
    }

    // int count=0;
    // void dfs(TreeNode* root){
    //     if(!root) return;
        
    //     count++;
    //     countNodes(root->left);
    //     countNodes(root->right);
    // }
    // int countNodes(TreeNode* root) {
    //     dfs(root);
    //     return count;
    // }
};