// Last updated: 8/26/2025, 10:47:55 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        int ans = 0;
        for(auto [a,b] : m){
            if(b==1) return -1;// as except 1 all number is posible , form 2 to infinity 
            // ans+= b/3;
            // if(b%3) ans+=1;
            ans+=ceil(b/3.0);
        }
        return ans;
    }
};