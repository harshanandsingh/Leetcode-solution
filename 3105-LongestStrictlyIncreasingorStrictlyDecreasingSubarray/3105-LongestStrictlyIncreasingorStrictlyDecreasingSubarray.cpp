// Last updated: 7/28/2025, 8:56:18 AM
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int n = nums.size();
        int inc = 1, dec = 1,res = 1;
        for(int i = 1;i < n; i++){
            if(nums[i]==nums[i-1]){
                inc = dec = 1;
            }
            else if(nums[i]>nums[i-1]){
                inc++;
                dec = 1;
            }
            else if(nums[i]<nums[i-1]){
                inc = 1;
                dec++;
            }
            res = max({res,inc,dec});
        }
        return res;
    }
};
