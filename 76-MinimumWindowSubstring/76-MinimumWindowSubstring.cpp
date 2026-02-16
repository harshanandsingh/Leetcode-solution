// Last updated: 2/16/2026, 12:30:03 PM
1class Solution {
2public:
3    string minWindow(string s, string t) {
4
5        // we cant use set as well as multiset -> we have to use map 
6        // we will make a comparision based on per char and once we get to know it has the same count of the element then we will 
7        // the count of the required window and once we have the same window we will find the min length 
8
9        unordered_map<char,int>tar;
10        for(auto x:t) tar[x]++;
11
12        int req = tar.size();
13        int n = s.size();
14        int ind = INT_MAX;
15        //int m = t.size();
16
17        int cur = 0;
18        int len = INT_MAX;
19        unordered_map<char,int>pre;
20        int j = 0;
21        for(int i=0;i<n;i++){
22            pre[s[i]]++;
23            if(pre[s[i]]==tar[s[i]]) cur++;
24
25            while(j<= i && cur==req){
26                if(i-j+1 < len ){
27                    len = min(len , i-j+1);
28                    ind = j;
29                }
30                
31                
32                if(pre.count(s[j])) pre[s[j]]--;
33                if(pre[s[j]]<tar[s[j]]) cur--;
34                j++;
35            }
36        }
37        return len == INT_MAX ? "" :  s.substr(ind, len);
38
39        // unordered_map<char,int>m;
40        // int n = s.size();
41        // int k = t.size();
42        // // unordered_set<char>st(t.begin(),t.end());
43        // int len = INT_MAX , ind = 0;
44        // int i=0,j=0;
45        // while(j<n){
46        //     m[s[j]]++;
47
48        //     if(m[s[j]]==freq[s[j]]) pre++;
49
50        //     while(i<=j && pre == req){
51                
52        //         if(j-i+1 < len){
53        //             len = j-i+1;
54        //             ind = i;
55        //         }
56
57        //         m[s[i]]--;
58        //         // if(m.count(s[i])){
59        //         //     m[s[i]]--;
60        //         if(m[s[i]]<freq[s[i]]) pre--;
61        //         // }
62        //         i++;
63
64        //     }
65        //     j++;
66        // }
67        // return len == INT_MAX ? "" : s.substr(ind, len);
68    }
69};