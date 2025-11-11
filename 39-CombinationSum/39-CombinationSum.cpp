// Last updated: 11/11/2025, 11:52:19 PM
class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>& nums,int start,int target,int sum,vector<int>v){
        if(sum>target || start==nums.size()) return;
        if(sum==target){
            ans.push_back(v);
            return;
        }

        sum+=nums[start];
        v.push_back(nums[start]);
        solve(nums,start,target,sum,v);
        v.pop_back();
        sum-=nums[start];
        solve(nums,start+1,target,sum,v);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>v;
        solve(nums,0,target,0,v);
        return ans;
    }
};