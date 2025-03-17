class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumFreq;
        int sum = 0, count = 0;

        prefixSumFreq[0] = 1; // To handle cases where the subarray itself starts from index 0

        for (int num : nums) {
            sum += num;

            if (prefixSumFreq.find(sum - k) != prefixSumFreq.end()) {
                count += prefixSumFreq[sum - k];
            }

            prefixSumFreq[sum]++;
        }

        return count;
    }
};