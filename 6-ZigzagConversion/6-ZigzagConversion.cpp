// Last updated: 1/27/2026, 6:22:24 PM
1class Solution {
2public:
3    string convert(string s, int r) {
4        if (r == 1 || r >= s.size()) return s;
5        int n = s.size();
6        int i=0,k=0;
7        int turn = 1;
8        vector<vector<char>>v(r);
9        while(k<n){
10            if(turn){
11                while(k<n && i < r){
12                    v[i].push_back(s[k++]);
13                    i++;
14                }
15                if(i==r){
16                    i=r-2;
17                    turn = 0;
18                }
19            }
20            else{
21                while(k<n && i >= 0){
22                    v[i].push_back(s[k++]);
23                    i--;
24                }
25                if(i<0){
26                    i=1;
27                    turn = 1;
28                }   
29            }
30        }
31        string str="";
32        for(int i=0;i<r;i++){
33            for(auto x:v[i]){
34                str+=x;
35            }
36        }
37        return str;
38    }
39};