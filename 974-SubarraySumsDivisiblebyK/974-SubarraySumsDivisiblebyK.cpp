// Last updated: 8/18/2025, 11:18:04 AM
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // this is also same as subarray sum equals to target 

        unordered_map<int,int>m; // we need unordered map -> to store the remander and there count 
        m[0]=1; // store count of 0 = 1 
        long long int sum=0;
        int ans=0;
        for(auto x:nums){
            sum+=x;
            long long int ele = sum%k;
            // if remander is < 0 , it will give wrong answer 
            if(ele < 0) ele+=k; // this will give a wright value 
            if(m.find(ele)!=m.end()){
                // we alrady have the same remander -> we will add that number of count and increase the remander count 
                ans+=m[ele];
                m[ele]++; // increase the count of the element 
            }
            else{
                m[ele]=1; // we have to inser the reminder in the array 
            }
        }
        return ans;
    }
};