// Last updated: 1/28/2026, 6:00:51 AM
1class Solution {
2public:
3    bool checkInclusion(string p, string s) {
4        if(p.size()>s.size()) return {};
5            vector<int>pat(26);
6            for(auto x:p) pat[x-'a']++;
7
8            int k = p.size(); // size of the window 
9            int n = s.size(); // size of the string 
10
11            vector<int>str(26); 
12            for(int i=0;i<k;i++){
13                str[s[i]-'a']++; 
14            }
15            //vector<int>ans;
16            if(pat==str) return true;
17
18            for(int i=k;i<n;i++){
19                str[s[i]-'a']++;
20                str[s[i-k]-'a']--;
21                if(pat==str) return true;
22            }
23            return false;
24    }
25    bool checkInclusion1(string s1, string s2) {
26
27        if(s1.size()>s2.size()) return false;
28        int n = s2.size();
29
30        int k = s1.size(); // this is the size of the window 
31
32        vector<int>s1_f(26,0); // it will help to count the frequency of s1 string 
33        vector<int>s2_f(26,0); // it will help to find that the s2 contains s1 or not andy permutaion of that 
34
35        for(auto x:s1){ 
36            s1_f[x-'a']++;
37        }
38        int j = 0;
39        while(j<n){
40
41            s2_f[s2[j]-'a']++;
42
43            if(j >= k){
44                s2_f[s2[j-k]-'a']--;
45            }
46
47            if(s1_f == s2_f) return true;
48
49            j++;
50
51        }
52        return false;
53    }
54};