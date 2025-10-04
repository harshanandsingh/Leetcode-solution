// Last updated: 10/4/2025, 11:00:51 AM
class Solution {
public:

    int bfs(vector<vector<int>>&vis,vector<vector<int>>& grid,pair<int,int>start){
        int area_size = 1;
        int n = grid.size();
        int m = grid[0].size();
        int i = start.first;
        int j = start.second;
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        vector<pair<int,int>>tra={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            for(int k=0; k<4; k++){
                int a_p = a + tra[k].first;
                int b_p = b + tra[k].second;
                if(a_p>=0 && a_p<n && b_p>=0 && b_p<m && grid[a_p][b_p]==1 && !vis[a_p][b_p]){
                    area_size++;
                    vis[a_p][b_p] = 1;
                    q.push({a_p, b_p});
                }
            }
        }
        return area_size;

    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
         // finding the size of the vector 
        int n = grid.size();
        int m = grid[0].size();

        // area 
        int max_area = 0;

        // creating the visited array 
        vector<vector<int>>vis(n,vector<int>(m,0));

        // loop to find the total number of island 
        //int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    //count++;
                    int val = bfs(vis,grid,{i,j});
                    //cout<<val<<endl;
                    max_area = max(max_area , val);
                }
            }
        }
        return max_area;
    }


    
};