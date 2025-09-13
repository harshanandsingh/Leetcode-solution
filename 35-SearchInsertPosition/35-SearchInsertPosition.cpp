// Last updated: 9/13/2025, 1:05:38 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        
        if(nums[n-1] < target) return n;

        int l=0,r=n-1;
        
        while(l<r){
            int mid=(l+r)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target)  l=mid+1;
            else r=mid;
        }
        return r;
    }
};