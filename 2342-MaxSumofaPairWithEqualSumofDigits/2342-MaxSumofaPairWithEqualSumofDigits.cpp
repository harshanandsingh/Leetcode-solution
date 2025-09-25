// Last updated: 9/25/2025, 10:42:57 AM
class Solution {
public:
    int sum_degit(int n){
        int ans = 0;
        while(n>0){
            ans += n%10;
            n /= 10;
        }
        return ans;
    }
    int maximumSum(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int,vector<int>>m;
        for(int i=0;i<n;i++){
            int sum = sum_degit(nums[i]);
            m[sum].push_back(nums[i]);
        }

        int max_sum = INT_MIN;
        for(auto [a,b]:m){
            int size = b.size();
            if(size == 1) continue;

            // Sort group in descending order
            sort(b.begin(), b.end(), greater<int>());
            max_sum = max(max_sum , b[0]+b[1]);
        }
        return max_sum == INT_MIN ? -1 : max_sum;

    }
};