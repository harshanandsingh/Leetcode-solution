// Last updated: 7/29/2025, 3:46:11 PM
class Solution {
public:
    bool canConstruct(string r, string s) {
        vector<int>v(26,0);
        for(auto x:r){
            v[x-'a']++;
        }
        for(auto x:s){
            v[x-'a']--;
        }
        for(auto x:v){
            if(x>0) return false;
        }
        return true;
    }
};