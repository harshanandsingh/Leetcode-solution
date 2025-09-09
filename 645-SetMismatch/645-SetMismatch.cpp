// Last updated: 9/10/2025, 2:03:52 AM
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();
        int dup = -1;
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1] < 0 )  dup =abs(nums[i]);
            else nums[abs(nums[i])-1] = - nums[abs(nums[i])-1];
        }

        int mis = -1;
        for(int i=1;i<=n;i++){
            if(nums[i-1] >=0){
                mis = i;
                break;
            }
        }
        return {dup,mis};
        
    }
};