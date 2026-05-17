// Last updated: 5/17/2026, 8:59:28 AM
1class Solution {
2public:
3    using ull = unsigned long long;
4
5    int smallestUniqueSubarray(vector<int>& nums) {
6        int n = nums.size();
7
8        // random large base
9        const ull BASE = 911382323;
10
11        vector<ull> power(n + 1, 1);
12        vector<ull> pref(n + 1, 0);
13
14        // build prefix hash
15        for (int i = 0; i < n; i++) {
16            power[i + 1] = power[i] * BASE;
17
18            // +1000007 to avoid negative issues
19            pref[i + 1] = pref[i] * BASE + (ull)(nums[i] + 1000007);
20        }
21
22        auto getHash = [&](int l, int r) {
23            return pref[r + 1] - pref[l] * power[r - l + 1];
24        };
25
26        auto possible = [&](int len) {
27            unordered_map<ull, int> freq;
28
29            for (int i = 0; i + len - 1 < n; i++) {
30                ull h = getHash(i, i + len - 1);
31                freq[h]++;
32            }
33
34            for (int i = 0; i + len - 1 < n; i++) {
35                ull h = getHash(i, i + len - 1);
36
37                if (freq[h] == 1)
38                    return true;
39            }
40
41            return false;
42        };
43
44        int low = 1, high = n;
45        int ans = n;
46
47        while (low <= high) {
48            int mid = (low + high) / 2;
49
50            if (possible(mid)) {
51                ans = mid;
52                high = mid - 1;
53            } else {
54                low = mid + 1;
55            }
56        }
57
58        return ans;
59    }
60};