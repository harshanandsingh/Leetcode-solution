// Last updated: 7/12/2025, 12:32:30 PM
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0)); // to check for visited orange 

        queue<pair<pair<int,int>,int>>q; // to store the next orange 

        for(int i=0;i<n;i++){ // initial roten_orange index and time 
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j] =  1; // mark thet orange as visited 
                }
            }
        }

        vector<pair<int,int>>tra = {{-1,0},{1,0},{0,-1},{0,1}};
        int time = 0;
        while(!q.empty()){
            int a = q.front().first.first;
            int b = q.front().first.second;
            time = q.front().second;

            q.pop();

            // find make next ornge as roten which is near to the present orange 
            for(int k=0;k<4;k++){
                int a_t = a+tra[k].first;
                int b_t = b+tra[k].second;
                int new_time = time +1;

                if(a_t >=0 && a_t<n && b_t >=0 && b_t<m && !vis[a_t][b_t] && grid[a_t][b_t]==1){
                    vis[a_t][b_t]=1;
                    q.push({{a_t,b_t},new_time});
                }
            }

        }

        // checking if any orange is not visited then return -1 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!= 1 && grid[i][j]==1) return -1;
            }
        }

        return time;

    }
};