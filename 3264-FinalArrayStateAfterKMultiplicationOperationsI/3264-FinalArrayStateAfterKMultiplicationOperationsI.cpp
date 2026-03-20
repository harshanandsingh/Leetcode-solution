// Last updated: 3/20/2026, 3:20:40 PM
1class Solution {
2public:
3    vector<int> getFinalState(vector<int>& nums, int k, int mul) {
4
5        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
6        int n = nums.size();
7        for(int i=0;i<n;i++){
8            pq.push({nums[i],i});
9        }
10
11        while(k--){
12            int a = pq.top().first;
13            int b = pq.top().second;
14            pq.pop();
15            pq.push({a*mul,b});
16        }
17
18        while(!pq.empty()){
19            int a = pq.top().first;
20            int b = pq.top().second;
21            pq.pop();
22            nums[b]=a;
23        }
24        return nums;
25
26    }
27};