// Last updated: 11/13/2025, 9:34:39 AM
class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&nums , int start,vector<int>&v){
        if(start==nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[start]);
        solve(nums,start+1,v);
        v.pop_back();
        while(start+1<nums.size() && nums[start]==nums[start+1]) start++;
        solve(nums,start+1,v);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        solve(nums,0,v);
        return ans;
    }
};