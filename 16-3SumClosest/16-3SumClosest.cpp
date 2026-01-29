// Last updated: 1/29/2026, 4:23:49 PM
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        int n = nums.size();
5
6        sort(nums.begin(),nums.end());
7
8        int min_c = 100000;
9
10        for(int i=0;i<n;i++){
11
12            int j = i+1 , k = n-1;
13            while(j<k){
14                int sum = nums[i]+nums[j]+nums[k];
15
16                if(abs(target-sum) < abs(target-min_c) ) min_c = sum;
17
18                if(sum > target) k--;
19                else if(sum<target) j++;
20                else return target;
21
22                
23            }
24        }
25        return min_c;
26    }
27};