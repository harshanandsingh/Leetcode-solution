// Last updated: 1/27/2026, 10:18:44 PM
1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        unordered_set<int>s(jewels.begin(),jewels.end());
5
6        // for(auto x:jewels){
7        //     s.insert(x);
8        // }
9
10        int ans = 0;
11        for(auto x:stones){
12            if(s.count(x)) ans++;
13        }
14
15        return ans;
16    }
17};