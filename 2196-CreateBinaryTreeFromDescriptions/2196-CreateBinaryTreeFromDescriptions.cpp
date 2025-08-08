// Last updated: 8/8/2025, 6:33:21 PM
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
    TreeNode* createBinaryTree(vector<vector<int>>& arr) {
        
        unordered_map<int,TreeNode*>m;
        unordered_set<int> children; // To keep track of all children

        int n = arr.size();
        for(int i=0;i<n;i++){
            int parent = arr[i][0];
            int child = arr[i][1];
            int left = arr[i][2];

            

            // now find parent exist and child exist or not 
            // if not exist -> then create them and then add it in the map 
            if(m.count(parent)==0){
                TreeNode* p = new TreeNode(parent);
                m[parent]=p;
            }
            if(m.count(child)==0){
                TreeNode* c = new TreeNode(child);
                m[child]=c;
            }
            // now we have both parent and child , now make a relation between parent and child 
            if(left==1) m[parent]->left = m[child];
            else m[parent]->right = m[child];

            children.insert(child); // Mark this node as a child
        }

          // The root is the node that never appeared as a child
        for (auto& [val, node] : m) {
            if (children.count(val) == 0) {
                return node;
            }
        }

        return nullptr; // This should never happen if the tree is valid
    }
};