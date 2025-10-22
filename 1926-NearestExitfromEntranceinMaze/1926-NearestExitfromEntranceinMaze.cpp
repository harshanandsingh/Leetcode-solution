// Last updated: 10/22/2025, 12:06:42 PM
class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& start) {
        // this problem is same as rotenorange 
        int n = maze.size();
        int m = maze[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));

        queue<pair<pair<int,int>,int>>q;
        q.push({{start[0],start[1]},0}); // as we alrady know the starting position 

        vis[start[0]][start[1]]=1;
        //maze[start[0]][start[1]]='+';

        vector<pair<int,int>>v={{-1,0},{0,-1},{1,0},{0,1}};

        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int cost = q.front().second;
            q.pop();

            for(auto [a,b]:v){
                int new_row = row + a;
                int new_col = col + b;
                if(new_row >= 0 && new_row < n && new_col >= 0 && new_col < m && maze[new_row][new_col]=='.' && !vis[new_row][new_col]){
                    //&& !vis[new_row][new_col] remove this we dont need this 
                    
                    if(new_row == 0 || new_row == n-1 || new_col == 0 || new_col == m-1) return cost+1;
                    //maze[new_row][new_col]='+';
                    vis[new_row][new_col]=1;
                    q.push({{new_row,new_col},cost+1});
                }
            }
        }
        return -1;

    }
};