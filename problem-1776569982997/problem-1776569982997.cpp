// Last updated: 4/19/2026, 9:09:42 AM
1class Solution {
2public:
3    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
4        
5        vector<vector<int>>arr(n,vector<int>(m,0)); // actural array to return back
6        
7        // visited array -> time at which any color reach a particular cell  
8        vector<vector<int>>time_reached(n,vector<int>(m,-1));
9
10        // queue of vectors -> {row , col , color , time}
11        queue<vector<int>>q;
12        
13        // vector<pair<pair<int,int>,int>start_index;
14        
15        for(auto x:sources){
16            // arr[x[0]][x[1]] = x[2];
17            // q.push({x[0],x[1],x[2],0}); 
18            int r = x[0] , c = x[1] , col = x[2];
19            if(col > arr[r][c]) arr[r][c] = col;
20
21            if(time_reached[r][c] == -1){// not visited 
22                time_reached[r][c] = 0;
23                // q.push({x[0],x[1],x[2],0});
24            }
25        }
26
27        // Push unique starting points with their final MAX starting color
28        for(int i = 0; i < n; i++) {
29            for(int j = 0; j < m; j++) {
30                if(time_reached[i][j] == 0) {
31                    q.push({i, j, arr[i][j], 0});
32                }
33            }
34        }
35
36        vector<pair<int,int>>tra = {{-1,0},{1,0},{0,-1},{0,1}};
37
38        while(!q.empty()){
39            vector<int>sor = q.front();
40            q.pop();
41
42            int r = sor[0], c = sor[1] , col = sor[2] , time = sor[3];
43
44            int present_grid_color = arr[r][c];
45
46            for(auto [x,y]:tra){
47                int nr = x+r;
48                int nc = y+c;
49
50                if(nr >=0 && nc>=0 && nr<n && nc<m){
51                    if(time_reached[nr][nc] == -1){
52                        time_reached[nr][nc] = time+1;
53                        arr[nr][nc] = present_grid_color;
54                        q.push({nr,nc,present_grid_color,time+1});
55                    }else if(time_reached[nr][nc] == time+1){// reached at the same time 
56                        if(present_grid_color > arr[nr][nc]){
57                            arr[nr][nc]=present_grid_color;
58                        }
59                    }
60                    
61                }
62            } 
63        }
64        return arr;
65        
66    }
67};