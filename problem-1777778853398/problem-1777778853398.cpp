// Last updated: 5/3/2026, 8:57:33 AM
1class Solution {
2public:
3    vector<int> minCost(vector<int>& nums, vector<vector<int>>& queries) {
4        int n = nums.size();
5        
6        // prefix: cost to move from 0 -> i
7        vector<long long> pref(n, 0);
8        
9        for (int i = 0; i < n - 1; i++) {
10            long long leftDiff = (i > 0 ? nums[i] - nums[i - 1] : LLONG_MAX);
11            long long rightDiff = nums[i + 1] - nums[i];
12            
13            int closest;
14            if (i == 0) closest = i + 1;
15            else if (rightDiff < leftDiff) closest = i + 1;
16            else closest = i - 1;
17            
18            if (closest == i + 1)
19                pref[i + 1] = pref[i] + 1;
20            else
21                pref[i + 1] = pref[i] + rightDiff;
22        }
23        
24        // suffix: cost to move from n-1 -> i
25        vector<long long> suff(n, 0);
26        
27        for (int i = n - 1; i > 0; i--) {
28            long long rightDiff = (i < n - 1 ? nums[i + 1] - nums[i] : LLONG_MAX);
29            long long leftDiff = nums[i] - nums[i - 1];
30            
31            int closest;
32            if (i == n - 1) closest = i - 1;
33            else if (leftDiff <= rightDiff) closest = i - 1;
34            else closest = i + 1;
35            
36            if (closest == i - 1)
37                suff[i - 1] = suff[i] + 1;
38            else
39                suff[i - 1] = suff[i] + leftDiff;
40        }
41        
42        vector<int> ans;
43        
44        for (auto &q : queries) {
45            int l = q[0], r = q[1];
46            
47            if (l < r)
48                ans.push_back(pref[r] - pref[l]);
49            else
50                ans.push_back(suff[r] - suff[l]);
51        }
52        
53        return ans;
54    }
55};