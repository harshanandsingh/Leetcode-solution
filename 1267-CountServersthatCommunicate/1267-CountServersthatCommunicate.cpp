// Last updated: 7/16/2025, 1:07:59 PM
class Solution {
public:
// you dont have to apply bfs over hear 
    // int bfs(int i , int j ,vector<vector<int>>&vis, vector<vector<int>>& grid){
    //     int n = grid.size();
    //     int m = grid[0].size();

    //     queue<pair<int,int>>q;
    //     q.push({i,j});
    //     vis[i][j]=1;
    //     int sum = 1;
    //     vector<pair<int,int>>tra={{0,-1},{0,1},{1,0},{-1,0}};
    //     while(!q.empty()){
    //         auto [a,b] = q.front();
    //         q.pop();
    //         for(auto [a_t,b_t]:tra){
    //             a_t+=a;
    //             b_t+=b;
    //             if(a_t>=0 && a_t<n && b_t>=0 && b_t<m && !vis[a_t][b_t] && grid[a_t][b_t]){
    //                 sum+=1;
    //                 q.push({a_t,b_t});
    //                 vis[a_t][b_t]=1;
    //             }
    //         }
    //     }
    //     return sum;
    // }
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int> row(n,0) , col(m,0); // to cunt how many node are there in a particular column 

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){ // count the number of node in partucular row and particular column 
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] && (row[i]>1 || col[j]>1)){
                    count++;
                }
            }
        }
        return count;

        // vector<vector<int>>vis(n,vector<int>(m,0));

        // int net_sum = 0;

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(!vis[i][j] && grid[i][j]){
        //             int val = bfs(i , j , vis , grid);
        //             if(val >1) net_sum+=val;
        //         }
        //     }
        // }
        // return net_sum;

    }
};