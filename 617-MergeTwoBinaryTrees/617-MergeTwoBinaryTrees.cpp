// Last updated: 8/5/2026, 8:54:28 AM
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
14    // me(TreeNode* root1, TreeNode* root2){
15    //     TreeNode* temp = new TreeNode()
16
17    //     temp->left = me(roo1->left,root2->left);
18    //     temp->right = me(root1->right,root2->right);
19
20    //     if(root1 && root2) temp->val = root1->val + root2->val;
21    //     else if(root1) temp->val = root1->val;
22    //     else if(root2) temp->val = root2->val;
23    //     else return nullptr;
24    //     return temp;
25
26    // }
27    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
28        TreeNode* temp = new TreeNode();
29        
30        if(!root1 && !root2) return nullptr;
31        else if(root1 && !root2) return root1;
32        else if(!root1 && root2) return root2;
33        else if(root1 && root2) temp->val = root1->val + root2->val;
34
35        temp->left = mergeTrees(root1->left,root2->left);
36        temp->right = mergeTrees(root1->right,root2->right);
37
38
39        
40        // else if(root1) temp->val = root1->val;
41        // else if(root2) temp->val = root2->val;
42        // else return nullptr;
43        return temp;
44    }
45};