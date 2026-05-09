// Last updated: 5/9/2026, 6:23:05 PM
1class Solution {
2public:
3    vector<vector<int>>ans;
4    void result(vector<int>& nums,int start,vector<int>&par_ans){
5        if(start == nums.size()){
6            ans.push_back(par_ans);
7            return;
8        }
9        par_ans.push_back(nums[start]);
10        result(nums,start+1,par_ans);
11        par_ans.pop_back();
12        result(nums,start+1,par_ans);
13    }
14    vector<vector<int>> subsets(vector<int>& nums) {
15        vector<int>v;
16        result(nums,0,v);
17        return ans;
18    }
19};