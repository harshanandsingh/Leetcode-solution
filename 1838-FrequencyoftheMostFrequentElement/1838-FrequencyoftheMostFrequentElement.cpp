// Last updated: 7/27/2025, 11:35:35 AM
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        long long i=0,j=0;
        long long total = 0 , max_count = 0 ;
        while(j<n){
            total +=nums[j];

            while((long long)nums[j]*(j-i+1) - total > k){
                total -=nums[i];
                i++;
            }

            max_count = max((j-i+1),max_count);
            j++;

        }
        return max_count;
    }
};