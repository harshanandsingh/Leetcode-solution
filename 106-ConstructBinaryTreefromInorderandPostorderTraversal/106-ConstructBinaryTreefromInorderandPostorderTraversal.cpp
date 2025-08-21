// Last updated: 8/21/2025, 9:18:54 PM
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
    unordered_map<int,int>m;
    int index ;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        // this problem is same as the inorder and pre order 
        index = postorder.size()-1;
        for(int i=0;i<=index;i++){
            m[inorder[i]]=i;
        }
        return tree(postorder,0,index);
    }

    TreeNode* tree(vector<int>& postorder,int start , int end){
        if(start>end) return nullptr;

        // create a new node ->
        int root = postorder[index];
        TreeNode* temp = new TreeNode(root);

        // now we have to find the positon in inorder 
        int pos = m[root];

        index--;

        temp->right = tree(postorder,pos+1,end);
        temp->left = tree(postorder,start,pos-1);
        
        return temp;

    }
};