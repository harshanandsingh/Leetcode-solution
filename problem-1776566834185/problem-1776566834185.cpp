// Last updated: 4/19/2026, 8:17:14 AM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5        vector<int>min_arr(n),max_arr(n);
6        min_arr[n-1] = nums[n-1];
7        max_arr[0] = nums[0];
8        for(int i=1;i<n;i++){
9            max_arr[i]=max(nums[i],max_arr[i-1]);
10        }
11        for(int i=n-2;i>=0;i--){
12            min_arr[i]=min(nums[i],min_arr[i+1]);
13        }
14        for(int i=0;i<n;i++){
15            if(max_arr[i]-min_arr[i]<=k) return i;
16        }
17        return -1;
18    }
19};