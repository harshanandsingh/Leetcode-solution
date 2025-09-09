// Last updated: 9/9/2025, 7:57:01 PM
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        // i thnk it is a prefix sum problem 
        // first find the prefix sum 
        int n = nums.size();
        if(n==1) return 0;
        vector<long long int>ps(n);

        long long int sum = 0;
        for(int i = 0;i<n;i++){
            sum+=nums[i];
            ps[i]=sum;
        }

        // onw once we have prefix sum ready lest solve the problem 
        int index = 0;
        long long int min_val = LLONG_MAX;
        for(int i=0;i<n-1;i++){
            long long int val = abs ( (ps[i] / (i+1)) - ((ps[n-1]-ps[i])/(n-i-1)) );
            if(val < min_val){
                min_val = val;
                index = i;
            }
        }
        if(ps[n-1]/n < min_val) index = n-1;
        return index;

    }
};