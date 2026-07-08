// Last updated: 7/8/2026, 10:06:27 AM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int n = nums.size();
5        int i=0,j=0;
6        while(j<n){
7            if(nums[j]!=0) swap(nums[i++],nums[j]);
8            j++;
9        }
10    }
11};