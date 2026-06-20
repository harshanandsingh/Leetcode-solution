// Last updated: 6/20/2026, 10:29:55 PM
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        int n = nums.size();
5        int l = 0,r = n-1;
6        vector<int>res(n);
7        int idx = n-1;
8        while(l<=r){
9            if(abs(nums[l]) >= abs(nums[r])){
10                res[idx] = nums[l]*nums[l];
11                l++;
12                idx--;
13            }else{
14                res[idx] = nums[r]*nums[r];
15                r--;
16                idx--;
17            }
18        }
19        return res;
20    }
21};