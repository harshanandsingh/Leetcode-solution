// Last updated: 8/8/2025, 7:02:59 PM
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
    string str = "";
    void tree(TreeNode* root) {
        if(!root) return;

        str+= to_string(root->val);
        if(root->left){
            str+='(';
            tree(root->left);
        }
        if(root->right){
            if(!root->left){
                str+='(';
                str+=')';
            }
            str+='(';
            tree(root->right);
        }

        str+=')';

    }

    string tree2str(TreeNode* root) {
        if(root) tree(root);
        str.pop_back();
        return str;
    }
};