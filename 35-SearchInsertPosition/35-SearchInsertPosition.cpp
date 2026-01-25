// Last updated: 1/25/2026, 6:34:24 PM
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int n = nums.size();
5        
6        if(nums[n-1] < target) return n;
7
8        int l=0,r=n-1;
9        
10        while(l<=r){
11            int mid=(l+r)/2;
12            if(nums[mid]==target) return mid;
13            else if(nums[mid]<target)  l=mid+1;
14            else r=mid-1;
15        }
16        return l;
17    }
18};