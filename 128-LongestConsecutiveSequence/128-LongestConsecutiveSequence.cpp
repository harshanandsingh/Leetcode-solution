class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // if (nums.empty()) return 0; // Handle empty case
    
        // sort(nums.begin(), nums.end());

        // int count = 1, max_count = 1;
        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] == nums[i - 1]) continue;
        //     else if (nums[i] == nums[i - 1] + 1) count++;
        //     else {
        //         max_count = max(max_count, count);
        //         count = 1;
        //     }
        // }
        // return max(max_count, count); // Ensure last sequence is considered

        unordered_set<int> numSet(nums.begin(), nums.end());
        int max_count = 0;

        for (int num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) { // Start of a sequence
                int currentNum = num;
                int count = 1;

                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    count++;
                }
                max_count = max(max_count, count);
            }
        }
        return max_count;
    }
};