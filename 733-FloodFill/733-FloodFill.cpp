// Last updated: 7/12/2025, 11:22:38 AM
class Solution {
public:
    void bfs(vector<vector<int>>&vis,vector<vector<int>>& v, int sr, int sc, int color){
        //storing the orignal color 
        int n = v.size();
        int m = v[0].size();
        int original_color = v[sr][sc];
        queue<pair<int,int>>q;
        vis[sr][sc]=1;
        v[sr][sc]=color;
        q.push({sr,sc});
        vector<pair<int,int>>tra = {{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            int a = q.front().first;
            int b = q.front().second;

            q.pop();
            for(int k=0;k<4;k++){
                int a_t = a + tra[k].first;
                int b_t = b + tra[k].second;

                if(a_t>=0 && a_t<n && b_t>=0 && b_t<m && v[a_t][b_t]==original_color && !vis[a_t][b_t]){
                    v[a_t][b_t]=color;
                    vis[a_t][b_t]=1;
                    q.push({a_t,b_t});
                }
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>v(image.size(),vector<int>(image[0].size(),0));
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                v[i][j] =  image[i][j];
            }
        }

        vector<vector<int>>vis(image.size(),vector<int>(image[0].size(),0));

        bfs(vis,v,sr,sc,color);
        return v;
    }
};