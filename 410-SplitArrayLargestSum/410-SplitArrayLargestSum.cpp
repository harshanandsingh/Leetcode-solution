// Last updated: 3/21/2026, 10:56:24 PM
1class Solution {
2public:
3    int solve(int index , int n , vector<int>& nums, int k,vector<vector<int>> &dp){
4        // base case -> if we have k = 1 -> we have to add all the remaning value of array 
5         
6        if(k==1){
7            int sum = 0;
8            for(int i = index ;i<n;i++) sum+= nums[i];
9            return sum;
10        }
11
12        // if we alrady find the value of some index return that value 
13        if(dp[index][k] != -1) return dp[index][k]; // two dimention becouse we have two paramenter 
14        // on which it is dependent -> index and k  
15
16        // now we have to find all the pairs which can be formed 
17        int sum = 0;
18        int ans = INT_MAX;
19        for(int i = index ;i<=n-k;i++){
20            sum += nums[i];
21            int res = solve(i+1,n,nums,k-1,dp);
22            ans = min(ans, max(sum, res));
23        }
24        return dp[index][k] = ans;
25    }
26    int splitArray(vector<int>& nums, int k) {
27        int n=nums.size();
28        if(k>n) return -1;
29        vector<vector<int>> dp(n,vector<int>(k+1,-1));
30        return solve(0,n,nums,k,dp);
31    }
32};