// Last updated: 8/11/2025, 7:48:38 AM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid = low + (high - low) / 2; // Avoid potential overflow

            if (nums[mid] == target) return 1; // Found the target

            // Check which part of the array is sorted
            if(nums[mid]==nums[high] && nums[mid]==nums[low]){
                high=high-1;
                low=low+1;
                continue;
            }
            if (nums[low] <= nums[mid]) { // Left half is sorted
                if (target >= nums[low] && target< nums[mid] ) {
                    high = mid - 1; // Target is in the left half
                } else {
                    low = mid + 1; // Target is in the right half
                }
            } else { // Right half is sorted
                if ( target > nums[mid] && target <= nums[high]) {
                    low = mid + 1; // Target is in the right half
                } else {
                    high = mid - 1; // Target is in the left half
                }
            }
        }
        return 0;
    }
};