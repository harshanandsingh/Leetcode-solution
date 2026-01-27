// Last updated: 1/28/2026, 5:12:42 AM
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4        // anagram -> friquency will always remain the same 
5        if(p.size()>s.size()) return {};
6        vector<int>pat(26);
7        for(auto x:p) pat[x-'a']++;
8
9        int k = p.size(); // size of the window 
10        int n = s.size(); // size of the string 
11
12        vector<int>str(26); 
13        for(int i=0;i<k;i++){
14            str[s[i]-'a']++; 
15        }
16        vector<int>ans;
17        if(pat==str) ans.push_back(0);
18
19        for(int i=k;i<n;i++){
20            str[s[i]-'a']++;
21            str[s[i-k]-'a']--;
22            if(pat==str) ans.push_back(i-k+1);
23        }
24        return ans;
25    }
26};