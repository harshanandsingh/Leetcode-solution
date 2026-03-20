// Last updated: 3/20/2026, 2:07:27 PM
1class Solution {
2public:
3    int minimumOperations(vector<int>& nums) {
4
5        priority_queue<int,vector<int>,greater<int>>pq;
6
7        for(auto x:nums) if(x != 0) pq.push(x);
8
9        int count = 0;
10        while(!pq.empty()){
11            count++;
12            vector<int>temp;
13            // int size = pq.size();
14            int a = pq.top();
15            while(!pq.empty()){
16                if(pq.top() - a != 0) temp.push_back(pq.top()-a);
17                pq.pop();
18            }
19
20            //for(auto x:temp) cout<<x<<endl;
21            for(auto x:temp) pq.push(x);
22        }
23        return count;
24    }
25};