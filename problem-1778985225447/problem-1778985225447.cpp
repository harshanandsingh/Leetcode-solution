// Last updated: 5/17/2026, 8:03:45 AM
1class Solution {
2public:
3    bool isAdjacentDiffAtMostTwo(string s) {
4        int n = s.size();
5        for(int i=1;i<n;i++){
6            int a = (s[i]-'a');
7            int b = (s[i-1]-'a');
8            if(abs(a-b)>2) return false;
9        }
10        return true;
11    }
12};