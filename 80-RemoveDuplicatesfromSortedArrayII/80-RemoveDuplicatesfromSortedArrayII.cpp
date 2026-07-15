// Last updated: 7/15/2026, 5:49:35 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int n = nums.size();
5        int i=0,j=0,k=0;
6        while(j<n){
7            while(j<n && nums[j]==nums[i]) j++;
8            nums[k++]=nums[i];
9            if(j-i>=2) nums[k++]=nums[i];
10            i=j;
11        }
12        return k;
13    }
14};