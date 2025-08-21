// Last updated: 8/21/2025, 6:13:02 PM
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
    vector<int>ans;
    void rs(TreeNode* root , int level ){
        if(!root) return; 
        // it's a pre order traversal 
        if(ans.size()<level) ans.push_back(root->val); // as each level will give me one answer 
        rs(root->right,level+1); // first visit right side and then visit left side 
        rs(root->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        rs(root,1);
        return ans;
    }








    
    vector<int> rightSideView1(TreeNode* root) {
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