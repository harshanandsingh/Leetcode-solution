// Last updated: 9/10/2025, 3:00:43 AM
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // it is same as div by k 
        unordered_map<int,int>m;
        int n = nums.size();
        m[0]=-1;
        long long int ps = 0;
        for(int i=0;i<n;i++){
            //if(x==0) continue;
            ps+=nums[i];
            if(m.count(ps%k)){
                if(i-m[ps%k] >=2 ) return true;
            }
            else m[ps%k]=i;
        }
        return false;
    }
};