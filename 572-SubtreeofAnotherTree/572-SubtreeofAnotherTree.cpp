// Last updated: 8/5/2026, 9:16:11 AM
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
14    TreeNode* same = nullptr;
15    // void find_same(TreeNode* root, TreeNode* subRoot){
16    //     if(root == nullptr) return ;
17    //     if(root->val == subRoot->val) same = root;
18
19    //     find_same(root->left,subRoot);
20    //     find_same(root->right,subRoot);
21    // }
22    bool isSameTree(TreeNode* p, TreeNode* q) {
23        if( (p==nullptr && q != nullptr) || (p!=nullptr && q == nullptr)) return false;
24        else if(p == nullptr && q==nullptr) return true;
25        
26        if(p->val != q->val) return false;
27        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
28    }
29    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
30        if(isSameTree(root,subRoot)) return true;
31        if(!root) return false;
32        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
33        return false;
34
35        // find the the root of subroot once you have then find its same or not 
36        // if(root==nullptr && subRoot==nullptr) return true;
37        // else if(root == nullptr && subRoot != nullptr) return false;
38        // else if(root!= nullptr && subRoot == nullptr) return true;
39        // find_same(root,subRoot);
40        // return isSameTree(p,subRoot) || ;
41    }
42};