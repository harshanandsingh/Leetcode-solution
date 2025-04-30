// Last updated: 4/30/2025, 12:17:38 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // int n = nums.size();

        // for(int i=0;i<n;i++) nums[i]=nums[i]*nums[i];

        // sort(nums.begin(),nums.end());

        // return nums;

        int n = nums.size();
        vector<int> result(n);
        
        int left = 0, right = n - 1;
        int index = n - 1;

        while (left <= right) {
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];
            
            if (leftSq > rightSq) {
                result[index--] = leftSq;
                left++;
            } else {
                result[index--] = rightSq;
                right--;
            }
        }
        
        return result;
    }
};