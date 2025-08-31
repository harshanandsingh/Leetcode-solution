// Last updated: 8/31/2025, 11:48:50 AM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();

        sort(nums.begin(),nums.end());

        int min_c = 100000;

        for(int i=0;i<n;i++){

            int j = i+1 , k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];

                if(abs(target-sum) < abs(target-min_c) ) min_c = sum;

                if(sum > target) k--;
                else if(sum<target) j++;
                else return target;

                
            }
        }
        return min_c;
    }
};