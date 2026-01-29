// Last updated: 1/29/2026, 4:24:46 PM
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4
5        // i have to store the min difference
6
7        sort(nums.begin(),nums.end()); 
8        int n = nums.size(); 
9        int min_cou = 100000;
10        int i=0;
11        while(i<n){
12
13            int j = i+1 , k = n-1;
14
15            while(j<k){
16                int sum = nums[i]+nums[j]+nums[k];
17                if(abs(target - sum) < abs(target - min_cou) ) min_cou = sum;
18                if(sum < target) j++;
19                else if(sum>target) k--;
20                else return target;
21            }
22            i++;
23        }
24        return min_cou;
25
26    }
27};