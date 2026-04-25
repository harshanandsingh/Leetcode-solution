// Last updated: 4/25/2026, 8:45:28 PM
1class Solution {
2public:
3    bool is_connected(int mask,int n, vector<vector<int>>&adj){
4        int start_node = -1;
5        int subsetsize = 0;
6
7        for(int i=0;i<n;i++){
8            if((mask >> i) & 1){
9                if(start_node == -1) start_node = i;
10                subsetsize++;
11            }
12        }
13
14        if(subsetsize == 0) return false;
15
16        queue<int>q;
17        q.push(start_node);
18        int visited_mask = (1<<start_node);
19        int visited_count = 0;
20        while(!q.empty()){
21            int curr = q.front();
22            q.pop();
23            visited_count++;
24            for(int nei : adj[curr]){
25                if( ((mask >> nei) & 1) && !((visited_mask >> nei)&1)){
26                    visited_mask |= (1<<nei);
27                    q.push(nei);
28                }
29            }
30        }
31        return visited_count == subsetsize;
32    }
33    int evenSumSubgraphs(vector<int>& nums, vector<vector<int>>& edges) {
34        int n = nums.size(); // total number of nodes 
35        vector<vector<int>>adj(n); 
36        for(auto &e : edges){
37            adj[e[0]].push_back(e[1]);
38            adj[e[1]].push_back(e[0]);
39        }
40
41        // lets find all the subset 
42        int ans = 0;
43        for(int i = 1;i< (1<<n); i++){
44            int sum = 0;
45            for(int j = 0;j<n;j++){
46                if( (i >> j ) & 1) sum+= nums[j];
47            }
48
49            if(sum % 2 == 0){
50                if(is_connected(i,n,adj)){
51                    ans++;
52                }
53            }
54        }
55        return ans;
56    }
57};