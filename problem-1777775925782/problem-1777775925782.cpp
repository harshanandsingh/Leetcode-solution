// Last updated: 5/3/2026, 8:08:45 AM
1class Solution {
2public:
3    vector<int> countOppositeParity(vector<int>& nums) {
4        int n = nums.size();
5        vector<int>res(n);
6        for(int i=0;i<n;i++){
7            int ans = 0;
8            for(int j=i+1;j<n;j++){
9                if((nums[i]%2==0 && nums[j]%2==1) || (nums[i]%2==1 && nums[j]%2==0) ) ans++;
10            }
11            res[i]=ans;
12        }
13        return res;
14    }
15};