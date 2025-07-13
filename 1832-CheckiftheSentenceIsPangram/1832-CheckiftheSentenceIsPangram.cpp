// Last updated: 7/13/2025, 7:24:04 AM
class Solution {
public:
    bool checkIfPangram(string s) {
        // int n = s.size();
        // if(n<26) return false;
        // vector<int>v(26,0);
        // for(auto x:s){
        //     v[x-'a']++;
        // }
        // for(auto x:v){
        //     if(x==0) return false;
        // }
        // return true;

        vector<int>v(26);
        int n = s.size();
        for(auto x:s){
            v[x-'a']++;
        }
        for(auto x:v) if(x==0) return false;
        return true;

    }
};