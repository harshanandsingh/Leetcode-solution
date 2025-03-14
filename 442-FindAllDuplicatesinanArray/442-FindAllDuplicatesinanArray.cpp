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



public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;

        for (int num : nums) {
            int idx = abs(num) - 1;
            if (nums[idx] < 0) {
                res.push_back(abs(num));
            }
            nums[idx] = -nums[idx];
        }
        
        return res;
    }
};
