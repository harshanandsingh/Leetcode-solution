// Last updated: 8/15/2025, 9:57:25 PM
class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>s;
        for(auto x:logs){
            if(x=="../"){
                if(!s.empty()) s.pop();
            }else if(x=="./"){
                continue;
            }else{
                s.push(x);
            }
        }
        return s.size();
    }
};