// Last updated: 8/2/2025, 4:07:39 PM
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
    bool isCompleteTree(TreeNode* root) {
        // lets do level order traversal 
        // if we get any node thich is null -> and after that we find any node which is not null return flase 
        // logic -> null should be the last element to be sheen no element having null should be sheen after any nullptr 

        queue<TreeNode*>q;
        q.push(root);
        bool null_p = false;
        while(!q.empty()){
            int n = q.size();
            while(n--){
                TreeNode *a = q.front();
                q.pop();
                if(a==nullptr) null_p = true; // whenever we get the null we will make null present to true 
                if(a != nullptr && null_p ) return false; // when there is more element after the null is present 


                if(a != nullptr ) {
                    q.push(a->left);
                    q.push(a->right);
                }
                
            }
        }
        return true;
    }
    
};