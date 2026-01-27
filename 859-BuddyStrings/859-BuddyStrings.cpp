// Last updated: 1/27/2026, 1:04:24 PM
1class Solution {
2public:
3    bool buddyStrings(string s, string goal) {
4        // find the 2 difference 
5        if(s.size() != goal.size()) return false;
6
7        int n = s.size();
8        int j=0;
9        vector<int>v(26);
10        vector<int>dif;
11        while(j<n){
12            if(s[j]!=goal[j]) dif.push_back(j);
13            v[s[j]-'a']++;
14            j++;
15        }
16
17        if(!dif.empty()){
18            if(dif.size()==1) return false;
19            swap(s[dif[0]],s[dif[1]]);
20            return s==goal;
21        }else{
22            for(auto x:v){
23                if(x>=2) return true;
24            }
25            return false;
26        }
27        return false;
28    }
29};