// Last updated: 11/10/2025, 12:16:12 PM
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
    TreeNode* tree_create(int start,int end,vector<int>&nums){
        int mid = start + (end - start)/2;
        // base case -> 
        if(start > end) return nullptr;
        
        TreeNode* temp = new TreeNode(nums[mid]);
        temp->left = tree_create(start,mid-1,nums);
        temp->right = tree_create(mid+1,end,nums);
        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return tree_create(0,n-1,nums);
    }
};