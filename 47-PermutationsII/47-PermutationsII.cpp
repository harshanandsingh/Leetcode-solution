// Last updated: 11/13/2025, 11:36:53 AM
class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>& nums , vector<bool>& vis , vector<int>& pre){
        if(pre.size()==nums.size()){
            ans.push_back(pre);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(!vis[i]){
                vis[i]=true;
                pre.push_back(nums[i]);
                solve(nums,vis,pre);
                vis[i]=false;
                pre.pop_back();
                while(i+1<nums.size() && nums[i]==nums[i+1]){
                    i++;
                } 
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        // visited array -> which will tell which all had been used before 
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<bool>vis(n,false);
        // vector to make a answer 
        vector<int>per;
        solve(nums,vis,per);
        return ans;
    }
};