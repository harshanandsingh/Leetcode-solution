// Last updated: 3/17/2026, 12:26:57 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        priority_queue<int,vector<int>,greater<int>>pq;
5        for(auto x:nums){
6            pq.push(x);
7            if(pq.size()>2) pq.pop();
8        }
9        int a = pq.top(); pq.pop();
10        int b = pq.top(); pq.pop();
11        return (a-1) * (b-1);
12    }
13};