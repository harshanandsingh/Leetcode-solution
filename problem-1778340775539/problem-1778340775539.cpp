// Last updated: 5/9/2026, 9:02:55 PM
1class Solution {
2public:
3    bool isPossible(int n, const vector<vector<pair<int, int>>>& adj, int source, int target, int k, int threshold) {
4        vector<int> minHeavy(n, 1e9);
5        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
6
7        minHeavy[source] = 0;
8        pq.push({0, source});
9
10        while (!pq.empty()) {
11            auto [heavyCount, u] = pq.top();
12            pq.pop();
13
14            if (u == target) return heavyCount <= k;
15            if (heavyCount > minHeavy[u]) continue;
16
17            for (auto& edge : adj[u]) {
18                int v = edge.first;
19                int weight = edge.second;
20                // An edge is heavy if weight > threshold
21                int cost = (weight > threshold) ? 1 : 0;
22
23                if (minHeavy[u] + cost < minHeavy[v]) {
24                    minHeavy[v] = minHeavy[u] + cost;
25                    pq.push({minHeavy[v], v});
26                }
27            }
28        }
29        return false;
30    }
31
32    int minimumThreshold(int n, vector<vector<int>>& edges, int source, int target, int k) {
33        
34        if (source == target) return 0;
35
36        vector<vector<pair<int, int>>> adj(n);
37        int max_w = 0;
38        for (const auto& e : edges) {
39            adj[e[0]].push_back({e[1], e[2]});
40            adj[e[1]].push_back({e[0], e[2]});
41            max_w = max(max_w, e[2]);
42        }
43
44        int low = 0, high = max_w, ans = -1;
45
46        // Binary Search on the answer
47        while (low <= high) {
48            int mid = low + (high - low) / 2;
49            if (isPossible(n, adj, source, target, k, mid)) {
50                ans = mid;
51                high = mid - 1; // Try to find a smaller valid threshold
52            } else {
53                low = mid + 1; // Threshold too low, must increase
54            }
55        }
56
57        return ans; // Returns -1 if no valid path exists
58    }
59};