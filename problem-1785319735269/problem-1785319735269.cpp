// Last updated: 7/29/2026, 3:38:55 PM
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        vector<int>v(26,0);
5        vector<int>v1(26,0);
6        if(s.size() != t.size()) return false;
7        for(auto x:s) v[x-'a']++;
8        for(auto x:t) v1[x-'a']++;
9        return v==v1;
10
11    }
12};