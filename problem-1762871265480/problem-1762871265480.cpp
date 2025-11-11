// Last updated: 11/11/2025, 7:57:45 PM
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int j=0;j<(1<<n);j++){
            int a = 0;
            for(int i=0;i<n;i++){
                if((j & (1<<i))) a ^=nums[i];
            }
            sum+=a;
        }
        return sum;
    }
};