// Last updated: 9/25/2025, 12:11:35 PM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int  i=0,j=0;
        int min_length = INT_MAX;
        int sum = 0 ;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                min_length = min(min_length,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return min_length == INT_MAX ? 0 : min_length;
    }
};