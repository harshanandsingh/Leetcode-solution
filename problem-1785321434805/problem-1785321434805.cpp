// Last updated: 7/29/2026, 4:07:14 PM
1class Solution {
2public:
3    int appendCharacters(string s, string t) {
4        int n = s.size() , m = t.size();
5        int i=0,j=0;
6        while(i<n && j<m){
7            if(s[i]==t[j])j++;
8            i++;
9        }
10        return m-j;
11    }
12};