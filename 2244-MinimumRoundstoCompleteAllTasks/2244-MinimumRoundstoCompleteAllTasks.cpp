// Last updated: 8/26/2025, 10:39:34 PM
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>m;
        for(auto x:tasks){
            m[x]++;
        }
        int ans = 0;
        for(auto [a,b] : m){
            if(b==1) return -1;
            ans+= b/3;
            if(b%3) ans+=1;
        }
        return ans;
    }
};