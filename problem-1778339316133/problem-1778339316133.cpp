// Last updated: 5/9/2026, 8:38:36 PM
1class Solution {
2public:
3    int minGenerations(vector<vector<int>>& points, vector<int>& target) {
4        
5        vector<int> targetPoint = target;
6        
7        
8        set<vector<int>> allPoints;
9        for (const auto& p : points) {
10            allPoints.insert(p);
11        }
12
13        
14        if (allPoints.count(targetPoint)) {
15            return 0;
16        }
17
18        
19        if (allPoints.size() < 2) {
20            return -1;
21        }
22
23        
24        vector<vector<int>> currentGen(allPoints.begin(), allPoints.end());
25        int k = 0;
26
27        while (true) {
28            k++;
29            set<vector<int>> nextGen;
30
31            
32            for (const auto& p2 : currentGen) {
33                for (const auto& p1 : allPoints) {
34                    if (p1 == p2) continue; 
35
36                   
37                    vector<int> mid = {
38                        (p1[0] + p2[0]) / 2,
39                        (p1[1] + p2[1]) / 2,
40                        (p1[2] + p2[2]) / 2
41                    };
42
43                    
44                    if ((p1[0] + p2[0]) < 0 && (p1[0] + p2[0]) % 2 != 0) mid[0]--;
45                    if ((p1[1] + p2[1]) < 0 && (p1[1] + p2[1]) % 2 != 0) mid[1]--;
46                    if ((p1[2] + p2[2]) < 0 && (p1[2] + p2[2]) % 2 != 0) mid[2]--;
47
48                    if (mid == targetPoint) {
49                        return k;
50                    }
51
52                    if (allPoints.find(mid) == allPoints.end()) {
53                        nextGen.insert(mid);
54                    }
55                }
56            }
57
58           
59            if (nextGen.empty()) {
60                break;
61            }
62
63            
64            currentGen.clear();
65            for (const auto& p : nextGen) {
66                allPoints.insert(p);
67                currentGen.push_back(p);
68            }
69        }
70
71        return -1;
72    }
73};