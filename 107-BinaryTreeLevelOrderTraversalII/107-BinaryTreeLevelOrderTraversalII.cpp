// Last updated: 8/14/2025, 12:53:14 PM
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>v;
        if(!root) return v;

        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>level;
            while(n--){
                TreeNode* a = q.front();
                q.pop();
                level.push_back(a->val);
                if(a->left ) q.push(a->left);
                if(a->right ) q.push(a->right);
            }
            v.push_back(level);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};