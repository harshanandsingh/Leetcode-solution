// Last updated: 4/26/2026, 8:14:33 AM
1class Solution {
2public:
3    vector<int> findValidElements(vector<int>& nums) {
4        int n = nums.size();
5        vector<bool>isvalid(n,false);
6        int max = INT_MIN;
7        for(int i=0;i<n;i++){
8            if(nums[i]>max){
9                max = nums[i];
10                isvalid[i]=true;
11            }
12        }
13        max = INT_MIN;
14        for(int i = n-1;i>=0;i--){
15            if(nums[i]>max){
16                isvalid[i]=true;
17                max=nums[i];
18            }
19        }
20        vector<int>result;
21        for(int i = 0;i<n;i++){
22            if(isvalid[i]) result.push_back(nums[i]);
23        }
24        return result;
25    }
26};