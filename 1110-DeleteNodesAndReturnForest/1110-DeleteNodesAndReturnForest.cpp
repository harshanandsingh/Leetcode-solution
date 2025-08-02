// Last updated: 8/2/2025, 5:45:50 PM
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
    set<int>s;
    vector<TreeNode*> ans;
    TreeNode* del(TreeNode* root) {
        if (root == nullptr) return nullptr;

        root->left = del(root->left);
        root->right = del(root->right);

        if (s.count(root->val)) {
            if (root->left) ans.push_back(root->left);
            if (root->right) ans.push_back(root->right);
            return nullptr; // node deleted
        }

        return root; // node retained
    }
    // void del(TreeNode* root){
    //     if(root == nullptr) return;

    //     del(root->left);
    //     del(root->right);

    //     if(s.find(root->val) !=s.end()){
    //         if(root->left) ans.push_back(root->left);
    //         if(root->right) ans.push_back(root->right);
            
    //         // now we have to remove the information form the parent about me 
            
    //     }
    // }

    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        // help to find out the node faster 
        
        for(auto x:to_delete){
            s.insert(x);
        }

        TreeNode* updatedRoot = del(root);
        if (updatedRoot) ans.push_back(updatedRoot);
        return ans;

        // we cant do traversal form top to down -> we can only do traversal form down to top ->  post order -> entire bottom 
        // from top to bottom -> 

        // level order traversal -> traverse throught the node -> if present in the set -> add its child if not null
        // the vector of node 

        // this will not work -> as lever order will remove the parent and if there is a child which should be deleted will not
        // get deleted 

        // queue<pair<TreeNode*,TreeNode*>> q;
        // vector<TreeNode*> ans;
        // q.push({root,nullptr});
        // ans.push_back(root);

        // while(!q.empty()){
        //     int n = q.size();
        //     while(n--){
        //         TreeNode *a = q.front().first;
        //         TreeNode *b = q.front().second;
        //         q.pop();
        //         if(s.find(a->val)!=s.end()){
        //             if(a->left != nullptr) ans.push_back(a->left);
        //             if(a->right != nullptr) ans.push_back(a->right);
                    
        //             if(b->left && b->left->val == a->val) b->left = nullptr;
        //             else if(b->right && b->right->val == a->val) b->right = nullptr;

        //             delete a;
        //         }
        //         else{
        //             if(a->left) q.push({a->left,a});
        //             if(a->right) q.push({a->right,a});
        //         }
        //     }
        // }
        // return ans;

    }
};