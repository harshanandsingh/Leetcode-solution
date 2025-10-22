// Last updated: 10/22/2025, 2:19:30 PM
class Solution {
public:
    bool dfs( vector<vector<int>>&v,vector<int>&vis,int index,int col){
        vis[index]=col;
        for(auto x:v[index]){
            if(vis[x]==col) return false;
            if(vis[x]==-1){// not visited 
                if(!dfs(v,vis,x,1 - col)) return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        // adjency list 
        vector<vector<int>>v(n+1);
        for(auto x:dislikes){
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        vector<int>vis(n+1,-1);
        for(int i=1;i<=n;i++){
            if(vis[i] == -1){
                if(!dfs(v,vis,i,0)) return false;
            }
        }
        return true;
    }
};