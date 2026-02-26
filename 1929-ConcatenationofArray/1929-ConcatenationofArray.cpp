// Last updated: 2/26/2026, 11:32:15 AM
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        
5        int n = nums.size();
6        vector<int>ans(2*n);
7        for(int i=0;i<n;i++){
8            ans[i]=nums[i];
9            ans[i+n]=nums[i];
10        }
11        return ans;
12        // int n= nums.size();
13        // // vector<int>v(2*n);
14        // for(int i=0;i<n;i++){
15        //     nums.push_back(nums[i]);
16        // }
17        // return nums;
18    }
19};