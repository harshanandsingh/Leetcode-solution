// Last updated: 7/26/2025, 6:13:44 AM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n= nums.size();
        // vector<int>v(2*n);
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};