// Last updated: 11/12/2025, 12:05:19 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<32;i++){
            int sum =0;
            for(auto x:nums) sum += x >> i & 1; 
            sum%=3;// if remender is 1 
            ans |=sum<<i;
        }
        return ans;
    }
    int singleNumber1(vector<int>& nums) {
        // one approch is to find the frequency of each element 
        unordered_map<int, int> m;
        
        for(auto x: nums){
            m[x]++;
        }

        for(auto x: m){
            if(x.second == 1){
                return x.first;
            }
        }
        
        return -1;
    }
};