// Last updated: 3/17/2026, 4:23:33 PM
1class Solution {
2public:
3    int fillCups(vector<int>& amount) {
4        priority_queue<int>pq;
5
6        for(auto x:amount) if(x>0) pq.push(x);
7
8        //if(pq.top()<=0) return 0;
9
10        int count = 0;
11
12        while(pq.size()>=2){
13
14            int a = pq.top(); pq.pop();
15            int b = pq.top(); pq.pop();
16
17            if(--a > 0) pq.push(a);
18            if(--b > 0) pq.push(b);
19
20            count++;
21
22        }
23        if(!pq.empty()) count+=pq.top();
24
25        return count;
26    }
27};