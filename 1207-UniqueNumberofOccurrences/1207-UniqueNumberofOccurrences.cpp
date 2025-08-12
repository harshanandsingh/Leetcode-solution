// Last updated: 8/12/2025, 10:09:54 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        unordered_set<int>s;
        for(auto x:arr){
            m[x]++;
        }
        for(auto x:m){
            if(s.find(x.second) != s.end()) return false;
            s.insert(x.second);
        }
        return true;
    }
};