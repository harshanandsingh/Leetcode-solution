class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pve;
        vector<int>nve;

        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]<0) nve.push_back(nums[i]);
            else pve.push_back(nums[i]);
        }

        int i=0,k=0;
        while(k<n){
            nums[k++] = pve[i];
            nums[k++] = nve[i++];
        }
        return nums;
    }
};