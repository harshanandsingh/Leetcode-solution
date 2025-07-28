// Last updated: 7/28/2025, 5:44:15 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        int count = 0;

        int i = 0 , j = 2;// window of size 3 
        while(j<n){
            // if ith place element is alrady 1 don't do anything move the window 
            
            if(j-i+1 == 3){
                if(nums[i]!=1){
                    int k = i;
                    while(k<i+3){
                        nums[k]=1-nums[k]; // if 0 then convert to 1 and if 1 then convert to 0 
                        k++;
                    }
                    count++;
                }
                // now change the window 
                i++;
            }
            j++;
        }
        for(auto x:nums){
            if(x==0) return -1;
        }
        return count;
    }
};