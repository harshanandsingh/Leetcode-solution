// Last updated: 7/17/2025, 6:54:19 PM
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));

        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>ans(n,vector<int>(m,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && !grid[i][j]){
                    vis[i][j]=1;
                    ans[i][j]=0;
                    q.push({{i,j},0});
                }
            }
        }

        vector<pair<int,int>>tra={{0,-1},{0,1},{1,0},{-1,0}};
        while(!q.empty()){
            int a = q.front().first.first;
            int b = q.front().first.second;
            int score = q.front().second;
            q.pop();
            for(auto [a_t,b_t] : tra){
                a_t+=a;
                b_t+=b;
                if(a_t>=0 && a_t<n && b_t>=0 && b_t<m && !vis[a_t][b_t] && grid[a_t][b_t]){
                    vis[a_t][b_t]=1;
                    ans[a_t][b_t]=score+1;
                    q.push({{a_t,b_t},score+1});
                }
            }

        }
        return ans;
    }
};