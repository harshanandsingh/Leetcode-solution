// Last updated: 4/26/2026, 9:17:14 AM
1#define lli long long
2class Solution {
3public:
4    long long minOperations(vector<int>& nums) {
5        int n = nums.size();
6        if(n<= 1) return 0;
7
8        lli total_increase = 0;
9        // int current_max = nums[0];
10
11        for(int i=1;i<n;i++){
12            if(nums[i] < nums[i-1]){
13                total_increase += (long long)nums[i-1] - nums[i];
14            }
15        }
16        return total_increase;
17    }
18};