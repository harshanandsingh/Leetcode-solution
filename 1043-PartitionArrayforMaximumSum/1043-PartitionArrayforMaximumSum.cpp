// Last updated: 3/21/2026, 10:24:07 PM
1class Solution {
2public:
3    int solve(int index,int k,vector<int>& arr,int n,vector<int>&dp){
4
5        if(index >= n) return 0;
6
7        if(dp[index] != -1) return dp[index];
8
9        int max_val = 0;
10        int ans = 0;
11        int len = 0;
12        for(int i=index; i<n && i< index+k;i++){
13            len++;
14            max_val = max(max_val,arr[i]);
15            int temp = max_val * len + solve(i+1,k,arr,n,dp);
16            ans = max(ans,temp);
17        }
18        return dp[index] = ans;
19
20    }
21    int maxSumAfterPartitioning(vector<int>& arr, int k) {
22        int n = arr.size();
23        vector<int>dp(n+1,-1);
24        return solve(0,k,arr,n,dp);
25
26    }
27};