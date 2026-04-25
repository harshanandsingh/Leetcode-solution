// Last updated: 4/25/2026, 8:08:24 PM
1class Solution {
2public:
3    bool validDigit(int n, int x){
4        string s = to_string(n);
5        char target = x + '0';
6        if(s[0] == target ) return false;
7
8        for(int i = 1;i<s.size();i++){
9            if(s[i] == target) return true;
10        }
11
12        return false;
13    }
14};