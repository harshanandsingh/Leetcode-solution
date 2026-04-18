// Last updated: 4/18/2026, 6:24:37 PM
1class Solution {
2public:
3    int mirrorFrequency(string s) {
4
5        // strore the frequency of each charector 
6        unordered_map<char,int>m;
7        for(auto x:s){
8            m[x]++;
9        }
10
11        int ans = 0;
12
13        // unordered_set<char>st;
14        unordered_set<char> visited;
15        for(auto [x, y] : m) {
16            char mirror;
17
18            if(visited.count(x)) continue;
19            if(isdigit(x)) {
20                // if(st.count(x)) continue;
21                mirror = '9' - (x - '0');   // mirror for digits
22                // st.insert(mirror);
23                // st.insert(x);
24            } else {
25                // if(st.count(x)) continue;
26                mirror = 'z' - (x - 'a');   // mirror for letters
27                // st.insert(mirror);
28                // st.insert(x);
29            }
30
31            // process each pair only once
32            // if(x <= mirror) {
33            //     ans += abs(y - m[mirror]);
34            // }
35
36            int mirrorFreq = 0;
37            if(m.find(mirror) != m.end()) {
38                mirrorFreq = m[mirror];
39            }
40            ans += abs(y - mirrorFreq);
41
42            // ans += abs(y - m[mirror]);
43            // mark BOTH as visited
44            visited.insert(x);
45            visited.insert(mirror);
46        }
47    
48        return ans; 
49        // vector<char>v={'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j',
50        //                'i','h','g','f','e','d','c','b','a'};
51        // vector<char>v1 = {'9','8','7','6','5','4','3','2','1','0'};
52
53        // int ans = 0,index;
54        // for(auto [x,y]:m){
55        //     if(isdigit(x)){
56        //         if(x-'0'>=5) continue;
57        //         index = x-'0';
58        //         ans += abs(y-m[v1[index]]);
59        //     }else{
60        //         if(x-'a' >= 13 ) continue;
61        //         index = x-'a'; 
62        //         ans += abs(y-m[v[index]]);
63        //     }
64             
65            
66        // }
67        // return ans;
68    }
69};