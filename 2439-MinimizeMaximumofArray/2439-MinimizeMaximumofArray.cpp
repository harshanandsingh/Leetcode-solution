// Last updated: 8/12/2025, 5:44:46 PM
class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int ans = 0;
        long long sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            int avg = (sum + i) / (i + 1);
            ans = max(ans, avg);
        }

        return max(ans, nums[0]);
    }
};