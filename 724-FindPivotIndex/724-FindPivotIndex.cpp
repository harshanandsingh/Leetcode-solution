class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long totalSum = 0, leftSum = 0;

        for (int num : nums) totalSum += num;  // Calculate total sum

        for (int i = 0; i < nums.size(); i++) {
            if (leftSum == totalSum - leftSum - nums[i]) return i; // Check pivot condition
            leftSum += nums[i];  // Update left sum
        }

        return -1;  // No pivot found
    }
};