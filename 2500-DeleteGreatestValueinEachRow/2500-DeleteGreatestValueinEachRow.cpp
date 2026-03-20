// Last updated: 3/20/2026, 2:20:20 PM
1class Solution {
2public:
3    int deleteGreatestValue(vector<vector<int>>& grid) {
4        int n = grid.size();
5        int m = grid[0].size();
6
7        for(int i=0;i<n;i++){
8            sort(grid[i].rbegin(),grid[i].rend());
9        }
10
11        int sum = 0;
12        for(int j=0;j<m;j++){
13            int max_val = 0;
14            for(int i=0;i<n;i++){
15                max_val = max(max_val,grid[i][j]);
16            }
17            sum+=max_val;
18        }
19        return sum;
20    }
21};