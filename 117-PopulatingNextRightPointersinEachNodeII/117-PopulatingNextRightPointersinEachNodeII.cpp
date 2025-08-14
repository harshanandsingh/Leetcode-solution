// Last updated: 8/14/2025, 7:30:30 PM
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return nullptr;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            Node* pre = nullptr;
            while(n--){
                Node* a = q.front(); q.pop();
                if(!pre) pre=a;
                else{
                    pre->next = a;
                    pre=a;
                }

                if(a->left) q.push(a->left);
                if(a->right) q.push(a->right);
            }
            if(pre) pre->next=nullptr;
        }
        return root;
    }
};