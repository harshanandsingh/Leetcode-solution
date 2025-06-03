// Last updated: 6/3/2025, 5:52:50 PM
class Solution {
public:
    int bfs(vector<vector<pair<int,int>>>adj_list,vector<int>&vis,int s){
        queue<int>q;
        q.push(s);
        vis[s]=1;
        int count = 0;
        while(!q.empty()){
            int a = q.front();
            q.pop();
            for(auto& [nbr, needs_reversal] :adj_list[a]){
                // if(!vis[x]){
                //     count++;
                //     vis[x]=1;
                //     q.push(x);
                // }
                if (!vis[nbr]) {
                    vis[nbr] = 1;
                    count += needs_reversal;
                    q.push(nbr);
                }
            }
        }
        return count;
    }
    int minReorder(int n, vector<vector<int>>& connections) {

        vector<vector<pair<int,int>>>adj_list(n);

        vector<int>vis(n,0);

        for(auto conn : connections){
            int x = conn[0];
            int y = conn[1];
            adj_list[x].push_back({y,1}); // if this is the case then we need to have a reverse 
            adj_list[y].push_back({x,0}); // we dont have to reverse 
        }

        int count = 0;
        // for(int i=0;i<n;i++){
        //     if(!vis[i]){
        //         count+=bfs(adj_list,vis,i);
        //     }
        // }
        count+=bfs(adj_list,vis,0);                 
        return count;

    }
};