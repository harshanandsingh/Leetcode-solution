// Last updated: 7/12/2025, 10:00:01 AM
class Solution {
public:
    void bfs(vector<int>&vis,vector<vector<int>>&v,int start){
        vis[start]=1;
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int a = q.front();
            q.pop();
            for(int x:v[a]){
                if(!vis[x]){
                    vis[x]=1;
                    q.push(x);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        // to adjency list 
        int n = isConnected.size();
        vector<vector<int>>v(n+1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]) v[i].push_back(j);
            }
        }

        int count=0;
        vector<int>vis(n+1,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                bfs(vis,v,i);
            }
        }
        return count;

    }
};