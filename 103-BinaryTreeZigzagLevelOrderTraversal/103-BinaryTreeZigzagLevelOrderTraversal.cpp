// Last updated: 8/4/2025, 7:56:28 PM
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        queue<TreeNode*>q;
        if(root) q.push(root);
        bool o = true;
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
            if(o){
                v.push_back(level);
                o=false;
            }else{
                reverse(level.begin(),level.end());
                v.push_back(level);
                o=true;
            }
        }
        return v;
    }
};