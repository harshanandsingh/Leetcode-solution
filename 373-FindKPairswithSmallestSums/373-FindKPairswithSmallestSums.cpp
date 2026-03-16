// Last updated: 3/17/2026, 5:13:49 AM
1class Solution {
2public:
3    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
4        int n = nums1.size(), m = nums2.size();
5        vector<vector<int>> ans;
6        if (n == 0 || m == 0 || k == 0) return ans;
7
8        // Min-heap stores: {sum, {index_in_nums1, index_in_nums2}}
9        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
10
11        // Push the first element of nums1 paired with each element of nums2
12        // Or vice versa. Let's do nums1[i] + nums2[0] for all i.
13        for (int i = 0; i < min(n, k); i++) {
14            pq.push({nums1[i] + nums2[0], {i, 0}});
15        }
16
17        while (k-- > 0 && !pq.empty()) {
18            auto top = pq.top();
19            pq.pop();
20            
21            int i = top.second.first;
22            int j = top.second.second;
23            
24            ans.push_back({nums1[i], nums2[j]});
25
26            // If there's a next element in nums2 for the current nums1[i], push it
27            if (j + 1 < m) {
28                pq.push({nums1[i] + nums2[j + 1], {i, j + 1}});
29            }
30        }
31
32        return ans;
33    }
34    vector<vector<int>> kSmallestPairs1(vector<int>& nums1, vector<int>& nums2, int k) {
35        // as array is alrady sorted -> 
36        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
37
38        int n = nums1.size() , m = nums2.size();
39
40        for(int i=0;i<m;i++){
41            pq.push({ nums1[0] + nums2[i] , 0});
42        }
43
44        vector<vector<int>>ans;
45
46        while(k--){
47            if(pq.empty()) return ans;
48            // take the smallest sum out
49            int idx = pq.top().second;
50            int first_ele = pq.top().first - nums1[idx]; 
51            pq.pop();
52
53            ans.push_back({nums1[idx],first_ele});
54
55            if(idx+1 < n) pq.push({nums1[idx]+first_ele , idx+1});
56
57        }
58        return ans;
59    }
60
61    // wrong 
62    // vector<vector<int>> kSmallestPairs1(vector<int>& nums1, vector<int>& nums2, int k) {
63
64        // priority_queue<int,vector<int>,greater<int>>f_arr(nums1.begin(),nums1.end());
65        // priority_queue<int,vector<int>,greater<int>>s_arr(nums2.begin(),nums2.end());
66        // priority_queue<pair<int,int> ,vector<pair<int,int>> , [](pair<int,int>a,pair<int,int>b){
67        //     a.first+a.second < b.first+b.second;
68        // }>pq;
69
70        // int i=0,j=0;
71        // int n = nums1.size() , m = nums2.size();
72        // vector<vector<int>>ans;
73
74        // for(auto x:nums1){
75        //     for(auto y:nums2){
76        //         pq.push({x,y});
77        //         if(pq.size()>k) pq.pop();
78        //     }
79        // }
80        // while(!pq.empty()){
81        //     ans.push_back({pq.top().first,pq.top().second});
82        //     pq.pop();
83        // }
84
85        // while(k){
86            
87        //     if(!f_arr.empty() && !s_arr.empty() &&  k-- && f_arr.top() <= s_arr.top() ){
88        //         int a = f_arr.top();
89        //         f_arr.pop();
90        //         i++;
91        //         for(int k = j;k<m;k++){
92        //             ans.push_back({a,nums2[k]});
93        //             cout<<1<<" ";
94        //         }
95        //     }else if(!f_arr.empty() && !s_arr.empty() &&  k-- && f_arr.top() >= s_arr.top()){
96        //         int a = s_arr.top();
97        //         s_arr.pop();
98        //         j++;
99
100        //         for(int k = i;k<n;k++){
101        //             ans.push_back({nums1[k],a});
102        //             cout<<2<<" ";
103        //         }
104                
105        //     }
106        // }
107// 
108        // return ans;
109    // }
110};