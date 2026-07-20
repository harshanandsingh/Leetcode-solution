// Last updated: 7/20/2026, 3:15:34 PM
1class Solution {
2public:
3    bool backspaceCompare(string s, string t) {
4        // lets solve using stack 
5        stack<int>a,b;
6        int n = s.size();
7        int m = t.size();
8
9        for(auto x:s){
10            if(x!='#') a.push(x);
11            else{
12                if(a.size()) a.pop();
13            }
14        }
15        for(auto x:t){
16            if(x!='#') b.push(x);
17            else{
18                if(b.size()) b.pop();
19            }
20        }
21        if(a.size() != b.size()) return false;
22        while(a.size() && b.size()){
23            if(a.top()!=b.top()) return false;
24            a.pop();
25            b.pop();
26        }
27        return true;
28    }
29};