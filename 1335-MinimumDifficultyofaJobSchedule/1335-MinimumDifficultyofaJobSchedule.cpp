// Last updated: 8/8/2025, 12:43:14 AM
class Solution {
public:
    int f(int index , int n , vector<int>& job, int d,vector<vector<int>> &dp){
        // base case -> if we have day = 1 -> we have to complete all the task remaning
        // and max work is the max of all the work  
        if(d==1){
            int max_work = 0;
            for(int i = index ;i<n;i++) max_work = max(max_work,job[i]);
            return max_work;
        }

        // if we alrady find the value of some index return that value 
        if(dp[index][d] != -1) return dp[index][d]; // two dimention becouse we have two paramenter 
        // on which it is dependent -> task completed and day left 

        // now we have to find all the pairs which can be formed 
        int max_work = 0;
        int ans = INT_MAX;
        int res = 0;
        for(int i = index ;i<=n-d;i++){
            max_work = max(max_work , job[i]);
            res = max_work + f(i+1,n,job,d-1,dp);
            ans = min(ans,res);
        }
        return dp[index][d] = ans;
    }
    int minDifficulty(vector<int>& job, int d) {
        int n=job.size();
        if(d>n) return -1;
        vector<vector<int>> dp(n,vector<int>(d+1,-1));
        return f(0,n,job,d,dp);
    }
};