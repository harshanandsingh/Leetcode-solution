// Last updated: 8/14/2025, 11:19:42 AM
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // we have to check two tree are same or not 
        // i think we cant do dfs on both the tree at the same time 
        // so lets do bfs 

        queue<TreeNode*> q1, q2;
        q1.push(p);
        q2.push(q);

        while(!q1.empty() && !q2.empty()) {
            TreeNode* a = q1.front(); q1.pop();
            TreeNode* b = q2.front(); q2.pop();

            if((a == nullptr && b != nullptr) || (a != nullptr && b == nullptr))
                return false;

            if(a && b) {
                if(a->val != b->val) return false;
                q1.push(a->left);
                q1.push(a->right);
                q2.push(b->left);
                q2.push(b->right);
            }
        }
        return q1.empty() && q2.empty();

        // queue<TreeNode*>q1,q2;
        // if(p) q1.push(p);
        // if(q) q2.push(q);

        // while(!q1.empty() && !q2.empty()){
        //     int n = q1.size();
        //     int m = q2.size();
        //     if(n != m) return false;
        //     while(n--){
        //         TreeNode *a , *b;
        //         a = q1.front();
        //         b = q2.front();
        //         q1.pop(); q2.pop();
        //         if((a == nullptr && b != nullptr) || (a != nullptr && b == nullptr))
        //             return false;
        //         if(a && b && a->val != b->val)
        //             return false;

        //         if(a) q1.push(a->left);
        //         if(a) q1.push(a->right);
        //         if(b) q2.push(b->left);
        //         if(b) q2.push(b->right);
        //     }
        // }
        // if( (q1.empty() && !q2.empty() ) || (!q1.empty() && q2.empty()) ) return false;
        // return true;
    }
};