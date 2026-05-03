// Last updated: 5/3/2026, 9:09:40 AM
1class Solution {
2public:
3    int bit[100005];
4    void update(int idx, int val, int n) {
5        for (; idx <= n; idx += idx & -idx) bit[idx] = max(bit[idx], val);
6    }
7    int query(int idx) {
8        int res = 0;
9        for (; idx > 0; idx -= idx & -idx) res = max(res, bit[idx]);
10        return res;
11    }
12    int maxFixedPoints(vector<int>& nums) {
13        int n = nums.size();
14        for(int i = 0; i <= n; i++) bit[i] = 0;
15        vector<int> indices;
16        for (int i = 0; i < n; i++) {
17            if (nums[i] <= i) indices.push_back(i);
18        }
19
20        sort(indices.begin(), indices.end(), [&](int a, int b) {
21            int da = a - nums[a], db = b - nums[b];
22            if (da != db) return da < db;
23            return a < b;
24        });
25        int globalMax = 0;
26        for (int i : indices) {
27            int v = nums[i];
28            int current = query(v) + 1; 
29            update(v + 1, current, n);
30            globalMax = max(globalMax, current);
31        }
32        return globalMax;
33    }
34};