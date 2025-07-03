// Last updated: 7/3/2025, 10:59:29 AM
class Solution {
public:
    bool checkIfPangram(string s) {
        int n = s.size();
        if(n<26) return false;
        vector<int>v(26,0);
        for(auto x:s){
            v[x-'a']++;
        }
        for(auto x:v){
            if(x==0) return false;
        }
        return true;

    }
};