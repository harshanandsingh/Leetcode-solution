// Last updated: 8/11/2025, 8:29:06 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        // we can solve this problem , with the concept of peack element as well 
        // no we cant solve uisng the peak element -> 
        // int n = nums.size();
        // int low = 0, high = n-1;
        // int p;
        // while(low<=high){
        //     int mid = low + (high - low)/2;

        //     if( (mid==0 || nums[mid-1]<nums[mid]) && (mid==n-1  || nums[mid] > nums[mid+1]) ){
        //         p=mid;
        //         break;
        //     }
        //     else if(mid < n-1 && nums[mid]<nums[mid+1]) low = mid+1;
        //     else if(mid > 0 && nums[mid] < nums[mid-1]) high = mid-1;
        // }
        // cout<<p<<endl;
        // return p == n-1 ? nums[0] : nums[p+1];




        // this is one of the way to find the point of the sepration 
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
        return nums[high];
    }
};