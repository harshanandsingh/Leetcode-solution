// Last updated: 8/18/2025, 3:18:57 PM
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n-1]*nums[n-2] - nums[0]*nums[1];
    }
};