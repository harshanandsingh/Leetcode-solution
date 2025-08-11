// Last updated: 8/11/2025, 8:05:52 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // If mid element is greater than high, the minimum is in the right half
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } 
            // Else, the minimum is in the left half (including mid)
            else {
                high = mid ;
            }
        }
        
        // When low == high, we have found the minimum element
        return nums[low];
    }
};