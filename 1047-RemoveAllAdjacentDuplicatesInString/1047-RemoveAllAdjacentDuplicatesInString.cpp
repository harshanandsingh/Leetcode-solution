// Last updated: 1/26/2026, 10:39:34 PM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        string res;
5        for(auto x:s){
6            if(!res.empty() && res.back()==x) res.pop_back();
7            else res.push_back(x);
8        }
9        return res;
10    }
11};