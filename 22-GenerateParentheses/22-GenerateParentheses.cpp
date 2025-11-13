// Last updated: 11/13/2025, 12:01:09 PM
class Solution {
public:
    vector<string>ans;
    void solve(int n,int o,int c,string s){
        if(o==n && c==n){
            ans.push_back(s);
            return;
        }
        if(o<n){
            s.push_back('(');
            solve(n,o+1,c,s);
            s.pop_back();
        }
        if(c<o && c<n ){
            s.push_back(')');
            solve(n,o,c+1,s);
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        solve(n,0,0,s);
        return ans;
    }
};