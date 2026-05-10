// Last updated: 5/10/2026, 8:02:57 AM
1class Solution {
2public:
3    vector<int> concatWithReverse(vector<int>& nums) {
4        int n = nums.size();
5        vector<int>ans(2*n);
6        for(int i=0;i<n;i++){
7            ans[i]=nums[i];
8        }
9        reverse(nums.begin(),nums.end());
10        for(int i=0;i<n;i++){
11            ans[i+n]=nums[i];
12        }
13        return ans;
14    }
15};