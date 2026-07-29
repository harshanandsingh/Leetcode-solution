// Last updated: 7/29/2026, 4:37:20 PM
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int n = s.size();
5        int i = n - 1;
6        int count = 0;
7        while(i>=0 && s[i]==' ') i--;
8
9        while(i>=0 && s[i]!=' '){
10            count++;
11            i--;
12        }
13        return count;
14
15    }
16};