// Last updated: 2/26/2026, 3:02:54 PM
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs){
4        if(strs.empty()) return "";
5        string s = strs[0];
6
7        int n = strs.size();
8        for(int i=1;i<n;i++){
9            int m = min(strs[i].size(),s.size());
10            int j = 0;
11            for(j=0;j<m;j++){
12                if(strs[i][j] != s[j]){
13                    //s = strs[i].substr(0,j);
14                    break;
15                }
16
17            }
18            s = strs[i].substr(0,j);
19            if(s.empty()) return "";
20        }
21        return s;
22
23    }
24
25
26
27
28
29
30
31
32
33    string longestCommonPrefix1(vector<string>& strs) {
34       if (strs.empty()) return "";  // Handle empty vector case
35        if (strs.size() == 1) return strs[0];
36
37        string prefix = strs[0]; // Start with the first string as the prefix
38
39        for (int i = 1; i < strs.size(); i++) {
40            int j = 0;
41            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
42                j++;
43            }
44            prefix = prefix.substr(0, j); // Trim prefix to match current string
45            if (prefix.empty()) return ""; // If no common prefix exists, return immediately
46        }
47
48        return prefix;
49    }
50};
51
52// so you have to solve in this way -> break the problem in small small parts 
53// what you have to do and how you have to do 
54// and then start writing the code 