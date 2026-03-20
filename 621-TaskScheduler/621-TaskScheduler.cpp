// Last updated: 3/20/2026, 3:45:53 PM
1class Solution {
2public:
3    int leastInterval(vector<char>& tasks, int n) {
4
5        unordered_map<char,int>m;
6        for(auto x:tasks) m[x]++;
7
8        priority_queue<int>pq;
9
10        for(auto [a,b]:m) pq.push(b);
11
12        int ans = 0;
13
14        while(!pq.empty()){
15            vector<int>temp;
16            int work = 0;
17            int cycle = n+1;
18            while(cycle-- && !pq.empty()){
19                work++;
20                int a = pq.top();
21                pq.pop();
22                if(a-1 > 0) temp.push_back(a-1);
23            }
24            if(temp.size()!=0){
25                ans+=(n+1);
26                for(auto x:temp){
27                    pq.push(x);
28                }
29            }else{
30                ans += work;
31            }
32        }
33        return ans;
34    }
35};