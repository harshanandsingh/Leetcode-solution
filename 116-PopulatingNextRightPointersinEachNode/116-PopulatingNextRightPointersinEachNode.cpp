// Last updated: 8/14/2025, 7:17:48 PM
class Solution {
public:
    Node* connect(Node* root) {
        // we can solve this using level order traversal 
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

                if(a){
                    q.push(a->left);
                    q.push(a->right);
                }
            }
            if(pre) pre->next=nullptr;
        }
        return root;
    }
};