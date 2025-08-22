// Last updated: 8/22/2025, 11:36:34 AM
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
    //int total_count=1;
    int total_node(TreeNode* root){
        if(!root) return 0;
        return 1+total_node(root->left)+total_node(root->right);
    }
    int total;
    bool dfs(TreeNode* root , int index){
        if(!root) return true;
        
        if(index > total) return false;
        //total_count++;

        return dfs(root->left,2*index) && dfs(root->right,2*index+1);
    }
    bool isCompleteTree(TreeNode* root) {
        // lets try dfs 
        // left child index = 2*i and right child index = 2*i+1
        // find the total_node 
        total = total_node(root);
        return dfs(root,1);

    }





    bool isCompleteTree1(TreeNode* root) {
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
                
                // if(!a){
                    // this will not work -> as the q will not be empty enven in complet tree 
                //     return q.empty();
                // }
                if(a){
                    q.push(a->left);
                    q.push(a->right);
                }
                
            }
        }
        return true;
    }
    
};




//                 if(a != nullptr ) {
//                     q.push(a->left);
//                     q.push(a->right);
//                 }