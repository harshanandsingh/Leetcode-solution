// Last updated: 11/13/2025, 11:08:21 AM
class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&nums,vector<bool>&vis,vector<int>&per){
        if(per.size()==nums.size()){
            ans.push_back(per);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!vis[i]){
                per.push_back(nums[i]);
                vis[i]=true;
                solve(nums,vis,per);
                per.pop_back();
                vis[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        // we will use one visited array -> which will let us know which is used or not 
        int n = nums.size();
        vector<bool>vis(n,false);
        // we will use one vector to make a permutation 
        vector<int>per;
        solve(nums,vis,per);
        return ans;
    }
};