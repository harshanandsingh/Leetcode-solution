// Last updated: 4/30/2025, 12:37:12 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int i=0,j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j] < t ) i++;
            else if(nums[i]+nums[j] > t) j--;
            else if(nums[i]+nums[j]==t) return {i+1,j+1};
            
        }
        return {-1,-1};
    }
};