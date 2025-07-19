// Last updated: 7/19/2025, 6:38:23 PM
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        // find the location where we have find 
        int i = n-1;
        while(i>0){
            if(nums[i]>nums[i-1]) break;
            i--;
        }
        // if its like 9 8  7 6 so next will be 6 7 8 9 
        if(i == 0){
            reverse(nums.begin(),nums.end());
            return;
        }

        // find the next bigger number to replace 
        int e = nums[i-1];
        int j = n-1;
        while(j>=i){
            if(nums[j]>e){
                swap(nums[j],nums[i-1]);
                break;
            }
            j--;
        }
        reverse(nums.begin()+i , nums.end());
    }
};