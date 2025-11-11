// Last updated: 11/11/2025, 6:20:57 PM
class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&v,int start,vector<int>&nums){
        if(start==nums.size()){
            ans.push_back(v);
            return;
        }
        
        v.push_back(nums[start]);
        solve(v,start+1,nums);
        v.pop_back();
        solve(v,start+1,nums);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        // in this you have two option -> include or not include the ith index
        vector<int>v;
        solve(v,0,nums);
        return ans;
    }
};