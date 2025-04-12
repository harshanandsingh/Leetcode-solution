// Last updated: 4/13/2025, 12:16:23 AM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();

        int j =0, count=0,ans=0;
        while(j<n){
            if(nums[j] != 1) count=0;
            else count++;

            ans = max(ans , count);
            j++;
        }
        return ans;
    }
};