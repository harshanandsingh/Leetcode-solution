// Last updated: 11/14/2025, 11:34:24 AM
class Solution {
public:
    vector<int>ans;
    void traversal(Node* root){
        if(!root) return;
        vector<Node*>temp = root->children;
        for(auto x:temp){
           traversal(x);
        }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        traversal(root);
        return ans;
        
       // cout<<root->val<<endl;
        // vector<Node*>temp = root->children;
        // for(auto x:temp){
        //    if(x != nullptr) cout<<x->val<<endl;
        // }
        // return {};
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/