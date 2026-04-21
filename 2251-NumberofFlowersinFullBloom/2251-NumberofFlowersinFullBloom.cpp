// Last updated: 4/21/2026, 2:05:59 PM
1class Solution {
2public:
3    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
4        // we can solve using cordinate compression -> but to learn binery serch we are 
5        // solving using bs 
6
7        int n = people.size();
8        vector<pair<int,int>>v;
9
10        for(int i=0;i<n;i++){
11            v.push_back({people[i],i});
12        }
13        sort(v.begin(),v.end());
14        vector<int>score(n+1,0); // +1 to protect from out of bond exception 
15
16        for(auto x:flowers){
17            int start = x[0];
18            int end = x[1];
19            pair<int,int>temp = {start,INT_MIN};
20            int idx = lower_bound(v.begin(),v.end(),temp) - v.begin();
21            score[idx]++;
22            temp = {end+1,INT_MIN};
23            idx = lower_bound(v.begin(),v.end(),temp) - v.begin();
24            score[idx]--;
25
26        }
27        for(int i=1;i<n;i++){
28            score[i]+=score[i-1];
29        }
30        vector<int>ans(n,0);
31        for(int i=0;i<n;i++){
32            ans[v[i].second] = score[i];
33        }
34        return ans;
35
36        
37    }
38};