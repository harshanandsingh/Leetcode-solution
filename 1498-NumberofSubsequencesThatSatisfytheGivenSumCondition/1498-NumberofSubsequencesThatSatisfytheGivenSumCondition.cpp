// Last updated: 8/18/2025, 4:50:46 PM
class Solution {
public:
    int mod = 10^9 + 7;
    int numSubseq(vector<int>& nums, int target) {
        // first thing to observe that we are getting answer in the form of 2^x 
        // ex -> 3 5 6  target 9 -> so our totel pair form 3 will be {3,3}{3,5}{3,5,6},{3,6} = 2^2 where we 
        // get x = 2 form 5 and 6 , if x = 1 then we have {3,3}{3,5}, if x=0 then we have {3,3}
        // now x is calculated form all the pair which first lower element and other element can be 

        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;// if any nums[i]+nums[j]<=target then all the element between then can also be equal to target
        int ans = 0,mod = 1000000007;;
        while(i<n){
            while(i<=j && nums[i]+nums[j]>target){
                j--;
            }
            if (i <= j) {
                ans = (ans + power(2, j - i, mod)) % mod;
            }
            i++;
        }
        return ans; 
    }
    long long power(int base, int exp, int mod) {
        long long result = 1, b = base;
        while (exp > 0) {
            if (exp & 1) result = (result * b) % mod;
            b = (b * b) % mod;
            exp >>= 1;
        }
        return result;
    }
};


// we solve this in o(n*n) using brure force -> wrong attempt 
        // -> find each pair 
        // int n=nums.size();
        // const int MOD = (int)1e9 + 7;
        // sort(nums.begin(),nums.end());
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int sum=0;
        //         if(nums[i]+nums[j]<=target){
        //             if(i!=j) sum++;
        //             ans+=sum;
        //         }
        //     }
        //     ans+=1;
        // }
        // return ans;