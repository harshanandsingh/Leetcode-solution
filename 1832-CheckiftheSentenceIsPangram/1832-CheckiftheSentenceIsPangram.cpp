// Last updated: 6/12/2025, 9:37:59 PM
class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>v(26,0);
        for(auto x:s){
            v[x-97]++;
        }
        for(auto x:v){
            if(x==0) return false;
        }
        return true;

    }
};