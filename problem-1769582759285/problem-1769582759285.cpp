// Last updated: 1/28/2026, 12:15:59 PM
1class Solution {
2public:
3    int romanToInt(string s) {
4        int n = s.size();
5        int ans = 0;
6        unordered_map<char,int>m{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
7        for(int i=0;i<n-1;i++){
8            if(m[s[i]] < m[s[i+1]]) ans-=m[s[i]];
9            else ans+=m[s[i]];
10        }
11        ans +=m[s[n-1]];
12        return ans;
13       
14    }
15};