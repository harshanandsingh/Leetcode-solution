// Last updated: 11/12/2025, 1:01:06 AM
class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&nums,vector<int>&v,int i,int target){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(i>=nums.size() || target<0) return;

        v.push_back(nums[i]);
        solve(nums,v,i+1,target-nums[i]);
        v.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1]) i++;
        solve(nums,v,i+1,target);
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int>v;
        sort(nums.begin(), nums.end());
        solve(nums,v,0,target);
        return ans;
    }
};