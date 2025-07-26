// Last updated: 7/26/2025, 6:24:57 AM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        return s.size()!=nums.size();
    }
};