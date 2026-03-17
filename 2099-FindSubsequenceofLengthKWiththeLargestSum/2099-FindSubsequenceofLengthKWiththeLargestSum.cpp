// Last updated: 3/17/2026, 2:51:29 PM
1class Solution {
2public:
3    vector<int> maxSubsequence(vector<int>& nums, int k) {
4       // 1. Min-heap to keep the 'k' largest values
5        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
6        
7        for(int i = 0; i < nums.size(); i++){
8            pq.push({nums[i], i});
9            if(pq.size() > k) pq.pop();
10        }
11        
12        // 2. Move the k largest pairs into a vector so we can sort by index
13        vector<pair<int, int>> temp;
14        while(!pq.empty()){
15            temp.push_back(pq.top());
16            pq.pop();
17        }
18        
19        // 3. Sort by the index (the .second element) to restore original order
20        sort(temp.begin(), temp.end(), [](pair<int,int>& a, pair<int,int>& b){
21            return a.second < b.second; 
22        });
23        
24        // 4. Extract values into the final answer
25        vector<int> ans;
26        for(auto& p : temp){
27            ans.push_back(p.first);
28        }
29        
30        return ans;
31    }
32};