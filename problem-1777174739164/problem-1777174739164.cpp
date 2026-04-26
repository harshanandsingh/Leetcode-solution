// Last updated: 4/26/2026, 9:08:59 AM
1#define ll long long
2
3class SegTree {
4public:
5    int n;
6    vector<ll> tree;
7
8    SegTree(int sz) {
9        n = sz;
10        tree.assign(4 * n + 5, 0);
11    }
12
13    void update(int node, int l, int r, int idx, ll val) {
14        if (l == r) {
15            tree[node] = max(tree[node], val);
16            return;
17        }
18
19        int mid = (l + r) / 2;
20
21        if (idx <= mid) update(node * 2, l, mid, idx, val);
22        else update(node * 2 + 1, mid + 1, r, idx, val);
23
24        tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
25    }
26
27    ll query(int node, int l, int r, int ql, int qr) {
28        if (ql > r || qr < l) return 0;
29        if (ql <= l && r <= qr) return tree[node];
30
31        int mid = (l + r) / 2;
32
33        return max(
34            query(node * 2, l, mid, ql, qr),
35            query(node * 2 + 1, mid + 1, r, ql, qr)
36        );
37    }
38
39    void update(int idx, ll val) {
40        update(1, 1, n, idx, val);
41    }
42
43    ll query(int l, int r) {
44        if (l > r) return 0;
45        return query(1, 1, n, l, r);
46    }
47};
48
49class Solution {
50public:
51    long long maxAlternatingSum(vector<int>& nums, int k) {
52        int n = nums.size();
53        int MAXV = 100000;
54
55        vector<ll> up(n), down(n);
56
57        SegTree segUp(MAXV), segDown(MAXV);
58
59        ll ans = 0;
60
61        for (int i = 0; i < n; i++) {
62
63            // activate index i-k
64            if (i - k >= 0) {
65                int val = nums[i - k];
66                segUp.update(val, up[i - k]);
67                segDown.update(val, down[i - k]);
68            }
69
70            int x = nums[i];
71
72            up[i] = nums[i];
73            down[i] = nums[i];
74
75            // previous smaller
76            up[i] = max(up[i], nums[i] + segDown.query(1, x - 1));
77
78            // previous greater
79            down[i] = max(down[i], nums[i] + segUp.query(x + 1, MAXV));
80
81            ans = max({ans, up[i], down[i]});
82        }
83
84        return ans;
85    }
86};
87
88
89
90
91// #define lli long long 
92// class Solution {
93// public:
94//     long long maxAlternatingSum(vector<int>& nums, int k) {
95//         int n = nums.size();
96//         vector<lli>dp_valley(n+k+1,0);
97//         vector<lli>dp_peak(n+k+1,0);
98//         for(int i= n-1;i>=0;--i){
99//             dp_peak[i] = max(dp_peak[i+1],(lli)nums[i] + dp_valley[i+k]);
100//             dp_valley[i] = max(dp_valley[i+1],(lli)nums[i] +dp_peak[i+k]);
101//         }
102//         return max(dp_peak[0],dp_valley[0]);
103//     }
104// };