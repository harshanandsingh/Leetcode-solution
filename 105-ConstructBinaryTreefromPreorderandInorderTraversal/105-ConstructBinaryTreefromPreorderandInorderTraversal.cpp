// Last updated: 8/2/2025, 11:20:41 AM
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
    int new_head = 0;
    unordered_map<int,int>m; // to find the positon of inordered element 
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        // find the index at which the element is present 
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }

        return build(preorder,0,inorder.size()-1);
        
    }

    TreeNode* build(vector<int>& preorder,int start , int end){

        if(start>end) return nullptr;

        TreeNode* new_node = new TreeNode(preorder[new_head]); // it will create a new node each  time 

        // index of new_head in the inorder traversal 
        int index = m[preorder[new_head]]; 

        // move to second element in preorder -> the new head 
        new_head++;

        // now partition the inorder in two half , left and right of head 
        new_node->left = build(preorder, start , index-1);

        new_node->right = build(preorder, index+1 , end);

        // at the end return the head 
        return new_node;

    }
};