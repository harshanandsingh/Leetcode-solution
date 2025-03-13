class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=n-1;
        while(i<j){
            if(nums[i]%2 != 0){
                swap(nums[i],nums[j--]);
            }
            else i++;
        }
        return nums;
    }
};