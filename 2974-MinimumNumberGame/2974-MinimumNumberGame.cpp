// Last updated: 3/20/2026, 3:07:26 PM
1class Solution {
2public:
3    vector<int> numberGame(vector<int>& nums) {
4
5        priority_queue<int,vector<int>,greater<int>>pq;
6        for(auto x:nums) pq.push(x);
7
8        vector<int>ans;
9        while(!pq.empty()){
10            int a = pq.top(); pq.pop();
11            int b = pq.top(); pq.pop();
12
13            ans.push_back(b);
14            ans.push_back(a);
15        }
16        return ans;
17    }
18};