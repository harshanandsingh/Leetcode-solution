// Last updated: 8/14/2025, 11:46:22 AM
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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;

        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>e;
            while(n--){
                TreeNode* a = q.front(); q.pop();
                if(a){
                    e.push_back(a->val);
                    q.push(a->left);
                    q.push(a->right);
                }else{
                    e.push_back(-101);
                }
            }
            n = e.size();
            int i = 0 , j = n-1;
            while(i<=j){
                if(e[i++]!=e[j--]) return false;
            } 
        }
        return true;
    }
};