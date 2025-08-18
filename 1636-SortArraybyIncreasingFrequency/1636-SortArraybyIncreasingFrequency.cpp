// Last updated: 8/18/2025, 12:54:10 PM
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // we have ot count the frequency -> which is obvious 
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto [a,b]:m){
            v.push_back({b,a});
        }
        //sort(v.begin(),v.end(),greater<pair<int,int>>);
        sort(v.begin(),v.end(),[&](pair<int,int> a,pair<int,int> b){
            if(a.first==b.first) return a.second>b.second;
            return a.first<b.first;
        });
        vector<int>ans;
        for(auto [a,b]:v){
            for(int i=0;i<a;i++) ans.push_back(b);
        }
        return ans;
    }
};