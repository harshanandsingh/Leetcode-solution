// Last updated: 9/10/2025, 12:13:35 AM
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        vector<int>ans;
        int n = nums.size();


        int even_sum = 0;

        for(auto x:nums){
            if(x%2 == 0) even_sum +=x;
        }

        for(auto arr:queries){
            int x = arr[0] , y = arr[1];
            if(nums[y] %2 ==0) even_sum -= nums[y];

            nums[y]+=x;

            if(nums[y] %2 == 0) even_sum +=nums[y];

            ans.push_back(even_sum);
        }
        return ans;
    }
};