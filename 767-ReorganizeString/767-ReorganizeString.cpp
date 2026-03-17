// Last updated: 3/17/2026, 6:52:18 AM
1class Solution {
2public:
3    string reorganizeString(string s) {
4
5        unordered_map<char,int>m; 
6
7        int n = s.size();
8        
9        for(auto x:s){
10            m[x]++; // find the frequency 
11            if( m[x] > (n+1)/2 ) return "";
12        }
13
14        // put all char and its frequecny in pq 
15        priority_queue<pair<int,char>>pq;
16
17        for (auto const& [ch, freq] : m) {
18            pq.push({freq, ch});
19        }
20
21        string ans = "";
22        while(pq.size()>=2){
23
24            auto t1 = pq.top(); pq.pop();
25            auto t2 = pq.top(); pq.pop();
26
27            ans += t1.second;
28            ans += t2.second;
29
30            if (--t1.first > 0) pq.push(t1);
31            if (--t2.first > 0) pq.push(t2);
32
33        }
34
35        if(!pq.empty()){
36            ans += pq.top().second;
37        }
38
39        return ans;
40
41
42    }
43};