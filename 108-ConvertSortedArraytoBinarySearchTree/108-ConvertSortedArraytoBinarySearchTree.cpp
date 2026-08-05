// Last updated: 8/5/2026, 9:45:25 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    TreeNode* bst(vector<int>& nums,int low,int high){
15        if(low > high) return nullptr;
16
17        int mid = (low + high+1) /2;
18        TreeNode* temp = new TreeNode(nums[mid]);
19        temp->left = bst(nums,low,mid-1);
20        temp->right = bst(nums,mid+1,high);
21        return temp;
22    }
23    TreeNode* sortedArrayToBST(vector<int>& nums) {
24        return bst(nums,0,nums.size()-1);
25    }
26};