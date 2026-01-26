// Last updated: 1/26/2026, 11:22:07 AM
1class Solution {
2public:
3    bool help(vector<int>& nums, int p,int mid){
4        int count = 0; 
5        int n = nums.size();
6        int i=0;
7        while(i<n-1){
8            if(nums[i+1]-nums[i]<=mid){
9                count++;
10                i+=2;
11            }else{
12                i++;
13            }
14        }
15        return count>=p;
16    }
17    int minimizeMax(vector<int>& nums, int p) {
18        sort(nums.begin(),nums.end()); // help to form a pair 
19        int low = 0;
20        int high = *max_element(nums.begin(),nums.end());
21        int ans = high;
22        while(low <=high){
23            int mid = low + (high - low)/2;
24            if(help(nums,p,mid)){
25                ans = mid;
26                high = mid-1;
27                
28            }else{
29                low = mid+1;
30            }
31        }
32        return ans;
33    }
34};