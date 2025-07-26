// Last updated: 7/26/2025, 8:22:18 AM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();

        int j =0,count ,ans=0;
        while(j<n){
            count=0;
            while(j<n && nums[j]==1){
                count++;
                j++;
            }

            ans = max(ans , count);
            j++;
        }
        return ans;
    }
};