// Last updated: 11/1/2025, 10:28:49 AM
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min_sum = INT_MAX;
        int sum = 0;
        for(auto x:nums){
            sum+=x;
            min_sum = min(min_sum , sum);
        }
        return min_sum > 0 ? 1 : abs(min_sum)+1;
    }
};