// Last updated: 11/12/2025, 1:19:22 AM
class Solution {
public:
    vector<vector<int>>ans;
    void solve(int i,int n , int k, vector<int>&v){
        if(v.size()==k){
            ans.push_back(v);
            return;
        }
        if(i>n) return;
        v.push_back(i);
        solve(i+1,n,k,v);
        v.pop_back();
        solve(i+1,n,k,v);

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        solve(1,n,k,v);
        return ans;
        
    }
};