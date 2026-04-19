// Last updated: 4/19/2026, 8:14:40 AM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        
5        int n = nums.size();
6        vector<int>min_arr(n),max_arr(n);
7        min_arr[n-1] = nums[n-1];
8        max_arr[0] = nums[0];
9        for(int i=1;i<n;i++){
10            max_arr[i]=max(nums[i],max_arr[i-1]);
11        }
12        for(int i=n-2;i>=0;i--){
13            min_arr[i]=min(nums[i],min_arr[i+1]);
14        }
15        for(int i=0;i<n;i++){
16            if(max_arr[i]-min_arr[i]<=k) return i;
17        }
18        return -1;
19        
20    }
21};