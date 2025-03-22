// Last updated: 3/22/2025, 11:12:23 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum =0;
        for(int &x:nums){
            sum+=x;
            x=sum;
        }
        return nums;
    }
};