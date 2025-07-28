// Last updated: 7/28/2025, 6:28:18 PM
class Solution {
public:
    int minimumLength(string s) {

        unordered_map<char,int>m;

        // find the frequency 
        for(auto x:s){
            m[x]++;
        }

        // if odd -> add 1 if even add 2 
        int total=0;
        for(auto x:m){
            x.second % 2 == 1 ? total+= 1 : total+=2;
        }
        return total;

    }
};