// Last updated: 9/25/2025, 9:30:29 AM
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        
        // when n == k 
        if(n==k) return *max_element(nums.begin(),nums.end());

        // when k == 1
        if(k==1){
            unordered_map<int,int>m;
            for(auto x:nums){
                m[x]++;
            }
            int max_e = INT_MIN;
            for(auto [a,b]:m){
                if(b==1){
                    max_e = max(a,max_e);
                }
            }
            return max_e == INT_MIN ? -1 : max_e;
        }
        
        bool f_0 = false , f_n = false;
        for(int i=1;i<n-1;i++){
            if(nums[0]==nums[i]) f_0 = true;
            if(nums[n-1]==nums[i]) f_n = true;
            if(f_0 && f_n) break;
        }

        if(f_0 && f_n || nums[0]==nums[n-1]){
            return -1;
        }
        else if(f_0) return nums[n-1];
        else if(f_n) return nums[0];
        return max(nums[0],nums[n-1]);
        
    }
};