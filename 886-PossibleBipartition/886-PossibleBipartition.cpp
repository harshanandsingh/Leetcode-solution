// Last updated: 10/22/2025, 5:04:25 PM
class Solution {
public:

    bool dfs(vector<int> adj[], vector<int>& color, int c, int i){
        color[i] = c;
        for(auto it:adj[i]){
            if(color[it] == -1){
                if(!dfs(adj, color, !c, it)) return false;
            }
            else if(color[it] == c) return false;
        }

        return true;
    }

    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        int m = dislikes.size();
        vector<int> adj[n+1];
        for(int i=0; i<m; i++){
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }

        vector<int> color(n+1, -1);
        for(int i=1; i<=n; i++){
            if(color[i]==-1){
                if(!dfs(adj, color, 1, i)) return false;
            }
        }

        return true;

    }
};