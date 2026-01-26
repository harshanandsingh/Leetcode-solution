// Last updated: 1/26/2026, 10:49:15 AM
1class Solution {
2public:
3    bool help(int mid, int k,vector<int>&nums){
4        int n = nums.size();
5        int i=0,count=0;
6        while(i<n){
7            if(nums[i]<=mid){
8                count++;
9                i+=2;
10            }else{
11                i++;
12            }
13        }
14        return count>=k;
15    }
16    int minCapability(vector<int>& nums, int k) {
17        int low = *min_element(nums.begin(),nums.end());
18        int high = *max_element(nums.begin(),nums.end());
19        int ans = high;
20        while(low<=high){
21            int mid = low + (high - low)/2;
22            if(help(mid,k,nums)){
23                ans = mid;
24                high = mid -1;
25            }else{
26                low = mid+1;
27            }
28        }
29        return ans;
30    }
31};