// Last updated: 7/18/2025, 9:59:45 AM
class Solution {
public:
    int bfs(vector<vector<int>>& grid,vector<vector<int>>&vis,int i,int j){
        int n = grid.size();
        int m = grid[0].size();
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        int cell=1;
        bool flag = true;
        vector<pair<int,int>>tra={{-1,0},{1,0},{0,1},{0,-1}};
        while(!q.empty()){
            auto [a,b] = q.front();
            q.pop();
            for(auto [c,d] : tra){
                c+= a;
                d += b;
                if(c>=0 && c<n && d>=0 && d<m && !vis[c][d] && grid[c][d]){
                    q.push({c,d});
                    vis[c][d]=1;
                    cell++;
                }
                else if(c<0 || c>=n || d<0 || d>=m){
                    flag = false;
                }
            }
        }
        if(flag) return cell;
        return 0;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        // find the dimention of the grid 
        int n = grid.size();
        int m = grid[0].size();

        // make a visited array
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        // traverse the visited array and if not visited and in queue and mark as visited 
        queue<pair<int,int>>q;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]){
                    int a = bfs(grid,vis,i,j);
                    count+=a;
                }
            }
        }
        return count;

    }
};