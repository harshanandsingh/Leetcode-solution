// Last updated: 8/18/2025, 12:23:18 PM
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        // learning -> unordered map -> can't be sorted as it don't have begin and end pointer 
        // we have to use vector of pairs 
        // unordered_map<int,string>m; // it will sotre the pair of name and hight 
        vector<pair<int,string>>p;
        for(int i=0;i<names.size();i++){
            p.push_back({heights[i],names[i]});
        }
        sort(p.begin(),p.end(),greater<pair<int,string>>()); // we have to pass greater in a specific way  
        vector<string>ans;
        for(auto [a,b]:p){
            ans.push_back(b);
        }
        return ans;
    }
};