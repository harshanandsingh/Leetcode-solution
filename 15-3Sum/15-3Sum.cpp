// Last updated: 1/29/2026, 3:38:05 PM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        if(nums.size()<3) return {};
5        sort(nums.begin(),nums.end()); // sort in order to avoid duplicate answer 
6        vector<vector<int>>v;
7        int n = nums.size();
8        int i=0;
9        for(int i=0;i<n;i++){
10            if(i!=0 && nums[i-1]==nums[i]) continue;
11
12            int j = i+1 , k = n-1;
13            
14            while(j<k){
15                int sum = nums[i] + nums[j] + nums[k];
16                
17                if(sum==0){
18                    v.push_back({nums[i],nums[j],nums[k]});
19                    j++;
20                    while(j<k && nums[j]==nums[j-1]) j++;
21
22                    k--;
23                    while(j<k && nums[k]==nums[k+1]) k--;
24                }
25                else if(sum > 0) k--;
26                else j++;
27            }
28
29        }
30        return v;
31
32    }
33};