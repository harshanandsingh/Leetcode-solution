// Last updated: 7/29/2026, 4:24:13 PM
1class Solution {
2public:
3    int scoreOfString(string s) {
4        int sum = 0;
5        int n = s.size();
6        for(int i=1;i<n;i++){
7            sum+= abs( (s[i]-'a') - (s[i-1]-'a') );
8        }
9        return sum;
10    }
11};