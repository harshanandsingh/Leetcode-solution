// Last updated: 3/17/2026, 12:21:01 PM
1class Solution {
2public:
3    // 1. Define the comparator as a struct INSIDE or OUTSIDE the class
4    struct MyComparator {
5        bool operator()(pair<int, int>& a, pair<int, int>& b) {
6            // 'a' and 'b' are {soldier_count, row_index}
7            if (a.first == b.first) {
8                return a.second > b.second; // If counts are equal, higher index has lower priority
9            }
10            return a.first > b.first; // Higher soldier count has lower priority (Min-Heap)
11        }
12    };
13
14    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
15        // 2. Use the struct name as the template argument
16       // priority_queue<pair<int, int>, vector<pair<int, int>>, MyComparator> pq;
17
18       priority_queue<pair<int, int>> pq;
19
20        int n = mat.size();
21        int m = mat[0].size();
22
23        for (int i = 0; i < n; i++) {
24            int count = 0;
25            for (int j = 0; j < m; j++) {
26                if(mat[i][j]) count++;
27            }
28            pq.push({count, i});
29            if(pq.size()>k) pq.pop();
30        }
31
32        vector<int> result;
33        while (pq.size()) {
34            result.push_back(pq.top().second);
35            pq.pop();
36        }
37        reverse(result.begin(),result.end());
38        return result;
39
40    }
41};