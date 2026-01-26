// Last updated: 1/26/2026, 11:36:36 PM
1class Solution {
2public:
3    bool detectCapitalUse(string s) {
4
5        int cap = 0;
6        int n = s.size();
7        for(int i=0;i<n;i++){
8            if(isupper(s[i])) cap++;
9        }
10        if(cap == n || (cap==1 && isupper(s[0])) || cap==0) return true;
11        return false;
12        
13    }
14
15
16
17
18
19    bool allcap(string s){
20        int n = s.size();
21        for(int i=0;i<n;i++){
22            if(islower(s[i])) return false;
23        }
24        return true;
25    }
26    bool allsmall(string s){
27        int n = s.size();
28        for(int i=0;i<n;i++){
29            if(isupper(s[i])) return false;
30        }
31        return true;
32    }
33    bool detectCapitalUse1(string s) {
34
35        if(s[0]>='A' && s[0]<='Z'){ 
36            return allsmall(s.substr(1)) || allcap(s.substr(1)) ;
37        }
38        else{
39            return allsmall(s.substr(1));
40        }
41    }
42};