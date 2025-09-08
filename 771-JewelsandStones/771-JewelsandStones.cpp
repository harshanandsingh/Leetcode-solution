// Last updated: 9/8/2025, 2:47:23 PM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int>s;

        for(auto x:jewels){
            s.insert(x);
        }

        int ans = 0;
        for(auto x:stones){
            if(s.count(x)) ans++;
        }

        return ans;
    }
};