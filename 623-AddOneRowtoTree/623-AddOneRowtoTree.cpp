// Last updated: 8/4/2025, 10:48:15 AM
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
    void level_order(TreeNode* root, int val, int depth,int pd){
        queue<pair<TreeNode*,int>>q;
        q.push({root,pd});
        while(!q.empty()){
            int n = q.size();
            while(n--){
                auto [a,b] = q.front();
                q.pop();
                // check the depth are same 
                if(b==depth){
                    TreeNode* new_node_l = new TreeNode(val);
                    TreeNode* new_node_r = new TreeNode(val);
                    new_node_l->left = a->left;
                    new_node_r->right = a->right;
                    a->left = new_node_l;
                    a->right = new_node_r;
                }

                if(b>depth) return;
                if(a->left) q.push({a->left,b+1});
                if(a->right) q.push({a->right,b+1});
                
            }
            
        }
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        // if depth 1 -> we have to create a new node -> asign the left of that node to original root 
        // return the newnode as head 
        if(depth == 1){
            TreeNode* new_node = new TreeNode(val);
            new_node->left = root;
            return new_node;
        }

        // now if we have a depth which is > 1 , do inorder traversal with root , val , depth starting form 2 -> as we need 
        // root of the depth , not the child 

        // root val depth present_depth 
        level_order(root,val,depth,2); // as we want all the root at that lever when depth == preset_depth 
        return root;
    }
};