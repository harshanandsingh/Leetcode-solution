// Last updated: 10/22/2025, 12:35:53 PM
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool>vis(n,false);

        queue<int>q;
        q.push(0);
        vis[0]=true;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto x:rooms[node]){
                if(!vis[x]){
                    q.push(x);
                    vis[x]=true;
                }
            }
        }
        for(auto x:vis){
            if(!x) return false;
        }
        return true;
    }
};