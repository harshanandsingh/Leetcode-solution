// Last updated: 12/19/2025, 9:14:42 AM
1class Solution {
2public:
3    int findLengthOfLCIS(vector<int>& nums) {
4
5        int i=0,j=1;
6        int n = nums.size();
7        if(n==1) return n; // base case 
8        int max_l = 1;
9        while(j<n){
10            while(j<n && nums[j]>nums[j-1]){
11                j++;
12            }
13            max_l = max(max_l,j-i);
14            i = j;
15            j++;
16        }
17        return max_l;
18    }
19};