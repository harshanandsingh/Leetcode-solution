// Last updated: 1/27/2026, 9:57:02 PM
1class Solution {
2public:
3    int removePalindromeSub(string s) {
4        // maximum ans = 2 
5        // if palindrom -> 1 
6        // otherwise 2 
7        int i = 0 , j = s.size()-1;
8        while(i<j){
9            if(s[i++]!=s[j--]) return 2;
10        }
11        return 1;
12    }
13};