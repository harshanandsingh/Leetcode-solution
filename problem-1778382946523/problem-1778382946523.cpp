// Last updated: 5/10/2026, 8:45:46 AM
1class Solution {
2public:
3    long long minArraySum(vector<int>& nums) {
4
5        int max_n = 0;
6        for(int x:nums) max_n = max(max_n,x);
7
8        vector<bool>exists(max_n+1,false);
9        for(int x:nums) exists[x]=true;
10
11        vector<int>min_reach(max_n+1);
12        iota(min_reach.begin(),min_reach.end(),0);
13
14        for(int v=1;v<=max_n;v++){
15            if(!exists[v]) continue;
16
17            for(int m = 2*v; m <= max_n;m+=v){
18                if(exists[m]){
19                    min_reach[m]=min(min_reach[m],min_reach[v]);
20                }
21            }
22        }
23        long long total_sum = 0;
24        for(auto x:nums){
25            total_sum += min_reach[x];
26        }
27        return total_sum;
28    }
29};