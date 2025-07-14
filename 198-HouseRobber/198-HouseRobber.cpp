// Last updated: 7/14/2025, 11:25:46 AM
class Solution {
public:
    // int rob(vector<int>& nums) {
    //     wrong attempt , but good you atlist understand that why even and odd will not work 
    //     int n = nums.size();
    //     int e_total = 0;
    //     int o_total = 0;
    //     int e=0;
    //     while(e<n){
    //         e_total+=nums[e];
    //         e+=2;
    //     }
    //     int o=1;
    //     while(o<n){
    //         o_total+=nums[o];
    //         o+=2;
    //     }
    //     return max(e_total,o_total);
    // }

    int rob(vector<int>& nums){
        int n = nums.size();
        if(n==1)  return nums[0];
        if(n==2) return max(nums[0],nums[1]);

        vector<int>dp(n);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);

        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
        }
        return dp[n-1];
    }
};