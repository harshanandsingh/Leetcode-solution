// Last updated: 9/11/2025, 6:31:58 PM
class Solution {
public:
    int maxCoins(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum = 0;
        for(int i=n-2;i>=n/3;i-=2){
            cout<<nums[i]<<endl;
            sum+=nums[i];
        }
        return sum;
    }
};