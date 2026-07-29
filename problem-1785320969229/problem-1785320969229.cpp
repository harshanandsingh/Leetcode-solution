// Last updated: 7/29/2026, 3:59:29 PM
1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        if(s.size() > t.size()) return false;
5
6        int i=0 , j=0;
7        int n = s.size(); 
8        int m = t.size();
9        while(i<n  & j < m){
10            if(s[i] == t[j]) i++;
11            j++;
12        }
13        return i==n;
14    }
15};