// Last updated: 3/17/2026, 11:22:49 AM
1class Solution {
2public:
3    vector<string> findRelativeRanks(vector<int>& score){
4
5        int n  = score.size();
6
7        vector<string>ans(n); // this will store the answer 
8
9        priority_queue<pair<int,int>>pq;
10
11        for(int i=0;i<n;i++){
12            pq.push({score[i],i});
13        }
14
15        if(pq.empty()) return ans;
16        int idx = pq.top().second; ans[idx]="Gold Medal";
17        pq.pop();
18        if(pq.empty()) return ans;
19        idx = pq.top().second; ans[idx]="Silver Medal";
20        pq.pop();
21        if(pq.empty()) return ans;
22        idx = pq.top().second; ans[idx]="Bronze Medal";
23        pq.pop();
24        int count = 4;
25        while(!pq.empty()){
26            idx = pq.top().second; ans[idx]=to_string(count++);
27            pq.pop();
28        }
29        return ans;
30
31    }
32};