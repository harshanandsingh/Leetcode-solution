// Last updated: 7/20/2025, 8:17:48 AM
class Solution {
public:
    // vector<int> findDuplicates(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<int>v(n+1,0);
    //     for(int i=0;i<n;i++){
    //         v[nums[i]]++;
    //     }
    //     vector<int>ans;
    //     for(int i=0;i<n+1;i++){
    //         if(v[i]>=2) ans.push_back(i);
    //     }
    //     return ans;
    // }

    // vector<int> findDuplicates(vector<int>& nums) {
    //     vector<int> res;

    //     for (int num : nums) {
    //         int idx = abs(num) - 1;
    //         if (nums[idx] < 0) {
    //             res.push_back(abs(num));
    //         }
    //         nums[idx] = -nums[idx];
    //     }
        
    //     return res;
    // }
    vector<int> findDuplicates(vector<int>& nums){
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        vector<int>ans;
        while(i<n-1){
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
                int j = i+1;
                while(j<n && nums[j]==nums[i]) j++;
                i=j;
            }
            else i++;
        }
        return ans;
    }
    

};
