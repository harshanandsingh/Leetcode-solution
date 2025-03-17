class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int  i=0,j=0;
        int min_length = INT_MAX;
        int sum = 0 ;
        while(j<n){
            sum+=nums[j++];
            while(sum>=target){
                min_length = min(min_length,j-i);
                sum-=nums[i++];
            }
        }
        if(min_length != INT_MAX) return min_length;
        return 0;
    }
};