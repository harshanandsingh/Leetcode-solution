// Last updated: 8/6/2025, 12:13:15 AM
class Solution {
public:
    bool dp(int n , int sum , vector<int>& nums , vector<vector<int>>&v){
        // base case 
        if(sum == 0) return true;
        if(n==0) return false;

        // do memoization 
        if(v[n][sum] != -1) return v[n][sum];

        // check nums[n-1] > sum 
        if(nums[n-1]>sum) return v[n][sum] =  dp(n-1,sum,nums,v);

        return v[n][sum] =  dp(n-1,sum,nums,v) ||  dp(n-1,sum-nums[n-1],nums,v);
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int i = 0; 
        int n = nums.size();
        while(i<n){
            sum+= nums[i++];
        }
        if(sum %2 != 0) return false;

        // now do knapsack problem with total sum = sum/2;
        sum/=2;
        // now check the sum = 11 -> same as subset sum problem equals to target 
        vector<vector<int>>v(n+1,vector<int>(sum+1,-1));
        return dp(n,sum,nums,v);
        

    }
};