// Last updated: 1/28/2026, 7:43:04 AM
1class Solution {
2public:
3    string minWindow(string s, string t) {
4        unordered_map<char,int> freq;
5        for (char c : t) freq[c]++;
6
7        int req = freq.size();
8        int pre = 0;
9
10        unordered_map<char,int>m;
11        int n = s.size();
12        int k = t.size();
13        // unordered_set<char>st(t.begin(),t.end());
14        int len = INT_MAX , ind = 0;
15        int i=0,j=0;
16        while(j<n){
17            m[s[j]]++;
18
19            if(m[s[j]]==freq[s[j]]) pre++;
20
21            while(i<=j && pre == req){
22                
23                if(j-i+1 < len){
24                    len = j-i+1;
25                    ind = i;
26                }
27
28                m[s[i]]--;
29                // if(m.count(s[i])){
30                //     m[s[i]]--;
31                if(m[s[i]]<freq[s[i]]) pre--;
32                // }
33                i++;
34
35            }
36            j++;
37        }
38        return len == INT_MAX ? "" : s.substr(ind, len);
39    }
40};