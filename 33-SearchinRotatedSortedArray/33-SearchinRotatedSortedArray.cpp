// Last updated: 8/9/2025, 10:14:35 AM
class Solution {
public:
  int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid = low + (high - low) / 2; // Avoid potential overflow

            if (nums[mid] == target) return mid; // Found the target

            // Check which part of the array is sorted
            if (nums[low] <= nums[mid]) { // Left half is sorted
                if (target >= nums[low]  && target < nums[mid] ) {
                    high = mid - 1; // Target is in the left half
                } else {
                    low = mid + 1; // Target is in the right half
                }
            } else { // Right half is sorted
                if ( target <= nums[high] &&  target > nums[mid]) {
                    low = mid + 1; // Target is in the right half
                } else {
                    high = mid - 1; // Target is in the left half
                }
            }
        }
        return -1;
    }  
};

