// Last updated: 7/31/2026, 11:47:12 AM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    vector<Node*> children;
7
8    Node() {}
9
10    Node(int _val) {
11        val = _val;
12    }
13
14    Node(int _val, vector<Node*> _children) {
15        val = _val;
16        children = _children;
17    }
18};
19*/
20
21class Solution {
22public:
23    void n_postorder(Node* root,vector<int>&ans){
24        if(root == nullptr) return;
25
26        for(auto x:root->children){
27            n_postorder(x,ans);
28            ans.push_back(x->val);
29        }
30       
31
32    }
33    vector<int> postorder(Node* root) {
34        if(root == nullptr) return {};
35
36        vector<int>ans;
37
38        n_postorder(root,ans);
39        ans.push_back(root->val);
40        return ans;
41    }
42};