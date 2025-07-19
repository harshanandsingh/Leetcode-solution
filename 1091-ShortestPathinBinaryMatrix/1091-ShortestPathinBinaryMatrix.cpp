// Last updated: 7/19/2025, 8:54:54 AM
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        if (grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;

        // create a visited array -> to track the distance and is visited or not 
        vector<vector<int>>vis(n,vector<int>(n,0));

        // queue to store the visited cell and to find next nearest cell 
        // queue<pair<pair<int,int>,int>>q;
        queue<pair<int,int>>q;

        // if(!grid[0][0]) 
        vis[0][0]=1;

        // q.push({{0,0},1});
        q.push({0,0});

        while(!q.empty()){
            // int node_i = q.front().first.first;
            // int node_j = q.front().first.second;
            int node_i = q.front().first;
            int node_j = q.front().second;
            // int wt = q.front().second;
            int wt = vis[node_i][node_j];
            q.pop();

            // bfs traversal -> all 8 directon nearest node 
            for(int i= -1;i<= 1;i++){
                for(int j= -1;j<= 1;j++){
                    int a = node_i+i;
                    int b = node_j+j;
                    if(a>=0 && a<n && b>=0 && b<n && !grid[a][b] && !vis[a][b]){
                        vis[a][b] = wt+1;
                        // q.push({{a,b},wt+1});
                        q.push({a,b});
                    }
                    // BFS already ensures the shortest path is found the first time a node is visited. 
                    // else if(a>=0 && a<n && b>=0 && b<n && vis[a][b] && !grid[a][b]){
                    //     if(wt+1 < vis[a][b]) vis[a][b]=wt+1;
                    // }
                }
            }
        }

        if(vis[n-1][n-1]) return vis[n-1][n-1];
        return -1;


    }
};