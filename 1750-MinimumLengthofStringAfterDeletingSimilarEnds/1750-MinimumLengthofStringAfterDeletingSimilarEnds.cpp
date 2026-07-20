// Last updated: 7/20/2026, 11:10:41 AM
1class Solution {
2public:
3    int minimumLength(string s) {
4        int n = s.size();
5        int i = 0 , j = n-1;
6        while(i<j){
7            char st = s[i]; char ed = s[j];
8            cout<<st<<" "<<ed<<endl;
9            
10            if(st != ed) return j-i+1;
11            while(i<=j && st == s[i]) i++;
12            while(i<=j && ed == s[j]) j--;
13            cout<<s[i]<<" "<<s[j]<<endl;
14            cout<<i<<" "<<j<<endl;
15        }
16        if(i==j) return 1;
17        return 0;
18
19    }
20};