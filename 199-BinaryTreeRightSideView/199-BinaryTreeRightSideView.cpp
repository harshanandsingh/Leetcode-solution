// Last updated: 8/2/2025, 8:40:13 AM
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
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr) return {};

        vector<int>ans;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            
            int n = q.size();
            TreeNode* a;
            while(n--){
                a = q.front();
                q.pop();
                if(a->left != nullptr) q.push(a->left);
                if(a->right != nullptr) q.push(a->right);
            }
            ans.push_back(a->val);
        }
        return ans;
    }
};