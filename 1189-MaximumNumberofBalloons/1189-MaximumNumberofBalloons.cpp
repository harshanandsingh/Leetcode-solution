// Last updated: 9/11/2025, 1:25:27 AM
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>m;
        for(auto x:text){
            m[x]++;
        }
        // b = 1 a = 1 l = 2 o = 2 n = 1 


        int max_val = INT_MAX;
        
        return min({m['b'] , m['a'] , m['n'] , (m['l']/2) , (m['o']/2)});

    }
};