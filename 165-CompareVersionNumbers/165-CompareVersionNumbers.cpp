// Last updated: 1/27/2026, 6:51:36 PM
1class Solution {
2public:
3    int compareVersion(string v1, string v2) {
4        int n = v1.size();
5        int m = v2.size();
6        
7        int i=0,j=0;
8        while(i<n && j<m){
9            long long a = 0, b = 0;
10            //string s1 = "";
11            while(i<n && v1[i]!='.'){
12                // s1+=v1[i];
13                a = a * 10 + (v1[i] - '0');
14                i++;
15            }
16            if(i<n) i++; // to remove the dot
17
18            //string s2 = "";
19            while(j<m && v2[j]!='.'){
20                // s2+=v2[j];
21                b= b*10 + (v2[j]-'0');
22                j++;
23            }
24            if(j<m) j++; // to remove the dot 
25
26            // int a = stoi(s1);
27            // int b = stoi(s2);
28            if(a<b) return -1;
29            else if(a>b) return 1;
30        }
31        while(i<n){
32            // string s1 = "";
33            long long a = 0;
34            while(i<n && v1[i]!='.'){
35                a = a * 10 + (v1[i]-'0');
36                i++;
37            }
38            i++;
39            //int a = stoi(s1);
40            if(a>0) return 1;
41        }
42        while(j<m){
43            // string s2 = "";
44            long long b = 0;
45            while(j<m && v2[j]!='.'){
46                // s2+=v2[j];
47                b = b * 10 + (v2[j]-'0');
48                j++;
49            }
50            j++; // to remove the dot 
51            //int b = stoi(s2);
52            if(b>0) return -1;
53        }
54        return 0;
55    }
56};