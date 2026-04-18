// Last updated: 4/18/2026, 6:39:10 PM
1class Solution {
2public:
3    vector<int> findGoodIntegers(int n) {
4        vector<int> vals;
5        int limit = cbrt(n);
6
7        for (int a = 1; a <= limit; a++) {
8            int a3 = a * a * a;
9            for (int b = a; b <= limit; b++) {
10                int x = a3 + b * b * b;
11                if (x > n) break;
12                vals.push_back(x);
13            }
14        }
15
16        sort(vals.begin(), vals.end());
17
18        vector<int> result;
19
20        for (int i = 0; i < vals.size();) {
21            int j = i;
22            while (j < vals.size() && vals[j] == vals[i]) j++;
23
24            if (j - i >= 2) {
25                result.push_back(vals[i]);
26            }
27
28            i = j;
29        }
30
31        return result;
32    }
33};