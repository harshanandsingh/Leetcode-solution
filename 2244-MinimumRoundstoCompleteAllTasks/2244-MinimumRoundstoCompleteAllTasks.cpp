// Last updated: 8/26/2025, 10:42:36 PM
class Solution {
public:
    int minimumRounds(vector<int>& tasks){
        unordered_map<int,int>mp;
        for(auto &num:tasks){
            mp[num]++;
        }
        int ans=0;
        for(auto it:mp){
            if(it.second==1) return -1;
            ans+=ceil(it.second/3.0); // yeha 3.0 (point zero dena jaruri hai)
            // nhi toh integer ajaega float nhi ayega aur ceiling kaam nhi karega
        }
        return ans;
    }
};