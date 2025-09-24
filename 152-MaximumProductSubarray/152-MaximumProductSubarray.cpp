// Last updated: 9/24/2025, 6:03:34 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        int max_pro = nums[0];
        int min_pro = nums[0];
        int ans = nums[0];
        for(int i=1;i<n;i++){
            int temp = max({nums[i],max_pro*nums[i],min_pro*nums[i]});
            min_pro = min({nums[i],max_pro*nums[i],min_pro*nums[i]});
            max_pro = temp;
            ans = max(max_pro , ans);
        }
        return ans;
    }
};