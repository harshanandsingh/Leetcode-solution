// Last updated: 8/11/2025, 8:56:28 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 , high = nums.size()-1;
        while(low < high){
            int mid = low + (high - low )/ 2;

            if(nums[low]==nums[mid] && nums[high]==nums[mid]){
                low+=1;
                high-=1;
                continue;
            }
            
            if(nums[high] >= nums[mid]){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return nums[high];
    }
};