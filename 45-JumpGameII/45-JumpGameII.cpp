// Last updated: 9/29/2025, 5:49:07 PM
class Solution {
public:
    int jump(vector<int>& nums) {
        int left = 0 , right = 0;
        int n = nums.size();
        int count = 0;

        while(right<n-1){
            int max_dis = INT_MIN;
            for(int i = left; i<= right; i++){
                max_dis = max(i + nums[i],max_dis);
            } 
            if(max_dis == right) return -1;
            count++;
            left = right + 1;
            right = max_dis;
        }
        return count;
    }
};