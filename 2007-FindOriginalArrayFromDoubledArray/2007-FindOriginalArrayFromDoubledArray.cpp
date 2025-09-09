// Last updated: 9/9/2025, 11:52:09 PM
class Solution {
public:
    vector<int> findOriginalArray(vector<int>& cha) {
        
        int n = cha.size();
        if(n%2==1) return {};

        sort(cha.begin(),cha.end());

        unordered_map<int,int>m;
        for(auto x:cha){
            m[x]++;
        }
        vector<int>ans;
        for(auto x:cha){
            if(m[x]==0) continue;

            if(m[x*2]==0) return {};

            m[x]--;
            m[x*2]--;
            ans.push_back(x);
        }
        return ans;
    }
};